```cpp

#include <bits/stdc++.h>
using namespace std;

// Date: 18-11-2023, Next day Ind vs Aus CWC-2023 Final in Ahmedabad

int main() {

// Check if it is Palindrome or not?
  string Pcheck = "OPPO";
  int start = 0;
  int end = Pcheck.size() - 1;
  bool isPalindrome = true;

  while(start < end) {
    if(Pcheck[start] != Pcheck[end]) {
      isPalindrome = false;
      cout << "Not Palindrome";
      break; // Exit the loop after printing "Not Palindrome"
    }
    start++, end--;
  } 

  if(isPalindrome) {
    cout << "Palindrome";
  }

  return 0;
}

```
