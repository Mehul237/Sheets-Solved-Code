```cpp
#include <bits/stdc++.h>
using namespace std;

// Date: 18-11-2023, Next day Ind vs Aus CWC-2023 Final in Ahmedabad

void swap1(int a, int b) {
  a = a + b;
  b = a - b;
  a = a - b;
  cout << a <<' '<< b << '\n';
}

// 2. Using a temporary variable
void swap2(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  cout << a <<' '<< b << '\n';
}

// 1. Using bitwise XOR
/*  
------------------------------
void swap(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
------------------------------
*/

void swap3(int a, int b) {
  int x = a ^ b;
  int i = 0;
    
  while(x) {
    int curr = 1<<i;
    
    // if that bit in x is 1, then that bit is different in a and b
    if(x & curr ) {

      // change that bit in a
      a = a ^ curr;
      // change that bit in b
      b = b ^ curr;
      // make that 1 bit to 0 in x
      x = x ^ curr;
    }
    i++;
  }
  cout << a <<' '<< b << '\n';
}


void insertion_sort(int arr[], int n) {
  for (int i=0; i <= n-1; i++) {
    int j = i;
        
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}


int main() {

  string str;
  cout << "Enter the string: ";
  getline(cin, str);


// 1. Reverse string
  int start = 0;
  int end = str.size()-1;

  while(start < end) {
    swap(str[start++], str[end--]);
    // start++, end--;
  } 
  cout << "Reverse string: " << str << "\n";



// 2. Count size of string without using in-buil fn
  int size = 0;
  
  // Using for loop for count size of string with ignore the space b/w input string
  for(int i=0; str[i] != '\0'; i++) {
    if(str[i] == ' ') {  // Ignore the space
      continue;      
    }
    size++;
  }


  // Other method for couting size of string with space
  while(str[size] != '\0') {
     // size++;
  }
  cout << "Size: " << size << "\n";


  return 0;
}

// Time Complexity: O(n), Since we need to traverse the complete string
// Space Complexity: O(1), no extra space needed

```

## Method-0: Using extra space iterate from last to first

```cpp

class Solution {
  public:
  string reverseWord(string str) {
    
    string rev = "";
        
    // iterating over the characters of the string in reverse.
     for(int i = str.size()-1; i>=0; i--) {
            
      // appending the current character to the reversed string.
      rev += str[i];
    }  
    // returning the reversed string.
    return rev;
  }
};

// TC: O(N), SC(N) because we need to store the answer  
```



##  Method-1: Using in-built fn reverse

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
      reverse(s.begin(), s.end());
    }
};

// Time Complexity: O(n)
// Auxiliary Space: O(1)
```

## Method - 02: Two pointer (Implement in-built reverse fn)

```cpp

class Solution {
public:
    void reverseString(vector<char>& s) {      
        long long start = 0;
        long long end = s.size()-1;

        while(start <= end) {
            swap(s[start++], s[end--]);
          
         // Swap fn implemented,
         //    char temp = s[start];
         //    s[start] = s[end];
         //    s[end] = temp;
           
           start++;
           end--;
        }
    }
};


// Time Complexity: O(n), Since we need to traverse the complete string
// Space Complexity: O(1), no extra space needed
```
