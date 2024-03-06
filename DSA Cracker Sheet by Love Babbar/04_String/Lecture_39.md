
[1. Add Strings -- Leetcode](https://leetcode.com/problems/add-strings/description/)

```cpp

#include <bits/stdc++.h>
using namespace std;

string addStr(string num1, string num2) {
    
    // 0. Two pointer for iteration from last to first
    int num1Last = num1.size() - 1;
    int num2Last = num2.size() - 1;
    
    string ans;
    long long sum, carry = 0;


    // 1. num1 >= num2, num2 ele add first and also carry
    while(num2Last >= 0) {

        sum = (num1[num1Last] - '0') + (num2[num2Last] - '0') + carry;
        carry = sum / 10;           // sum = 13,  --13/10 = 1.3
        char c = '0' + sum % 10;    // How to convert 3 (extract last no from sum) into 3 to stored into ans?, sum % 10 (give the last no.) + '0' (add ASCII value -48 into sum % 10), Ex: '0' (48) + 3 (after the convert) = 51 means char '3'
        ans += c;

        num2Last--, num1Last--;
    }


    // 2. num1 some ele are remaining
    while(num1Last >= 0) {

        sum = (num1[num1Last] - '0') + carry;
        carry = sum / 10;           
        char c = '0' + sum % 10;    
        ans += c;

        num1Last--;       
    }


    if(carry) {
        ans += '1';
    }
    
    
    // 3. reverse(ans.begin(), ans.end());
    int start = 0;
    int end = ans.size()-1;

    while(start < end) {
        swap(ans[start++], ans[end--]);
    }

    return ans;
}



string ansStr(string num1, string num2) {
    if (num1.size() < num2.size())
        return addStr(num2, num1);  // Pass the larger number first
    else 
        return addStr(num1, num2);
}




int main() {

  string num1 = "26845";
  string num2 = "938";

  cout << ansStr(num1, num2);
 
  return 0;
}

```

--------------------------------------------------------------------------------------------------------
> **Time Complexity**: O(N)
> - The while loops iterate through the digits of both input strings once.
> - Since the length of the longer input string determines the number of iterations,
> - the time complexity is linear with respect to the length of the longer string, hence O(N).
>   
> **Space Complexit**y: O(N)
> - The space complexity mainly depends on the size of the result string ans.
> - The size of ans can be at most one digit larger than the length of the longer input string, so it's also O(N).
> 
--------------------------------------------------------------------------------------------------------
