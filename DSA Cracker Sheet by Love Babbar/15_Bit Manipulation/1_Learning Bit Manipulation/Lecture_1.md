### 1. Convert into Binary representation

```cpp

#include <bits/stdc++.h>
using namespace std;


string convert2Binary1(int n) {
    string res = "";

// Currently, the loop stops when n becomes equal to 1, 
// which means the least significant bit (LSB) is not included in the binary representation.

// we should change the loop condition to n != 0 so that the loop continues until n becomes 0, 
// ensuring all bits are included in the binary representation.
    while(n != 0) {
        
        if(n % 2 == 1) 
          res += '1';
        else           
          res += '0';
        n /= 2;  // n = n / 2;
    }
    reverse(res.begin(), res.end());
    return res;
}



string convert2Binary2(int num) {  
   string ans = "";

   while(num != 0) {
        if(num & 1) {
          ans += '1';  // 2. If it is remainder == 1 add to ans
        } else { 
          ans += '0';  
        }
        num /= 2;     // 1. Each step num is divided by 2
    }

    // Ex:  13 (13, 6, 3, 1)  -- stored the ans: 1, 0, 1, 1 is not correc,
    // We need to reverse this 1101 is the right answer for the num
    int start = 0;
    int end = ans.size()-1;

    while(start < end) {
        swap(ans[start++], ans[end--]);
    }
    return ans;
}



int main() {

  int n1 = 7;
  int n2 = 13;

  cout << convert2Binary1(n1) << "\n";
  cout << convert2Binary2(n2);

  return 0;
}
```
