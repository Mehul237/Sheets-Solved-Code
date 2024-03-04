```cpp

#include <bits/stdc++.h>
using namespace std;


// 1 --> 1108 https://leetcode.com/problems/defanging-an-ip-address/description/

class Solution {
public:
  string defangIPaddr(string address) {   

    string ans;

    // For each loop
    for(int iterate : address) {
      if(iterate == '.') {
        ans += "[.]";
        continue;
      }
      ans += iterate;
    }
    return ans;
  }
};

// TC: o(N), for traversing each element
// SC: o(N), To stored to ans


void rotateAntilockwise(string &str1) {
  char c = str1[0];
  int ind = 1;

  while(ind < str1.size()) {
    str1[ind-1] = str1[ind];
    ind++;
  }
  str1[str1.size()-1] = c;
}

void rotateClockwise(string &str1) {
  char c = str1.size()-1;
  int ind = str1.size()-2;

  while(ind >= 0) {
    str1[ind+1] = str1[ind];
    ind--;
  }
  str1[0] = c;
}

bool isRotated(string &str1, string &str2) {

  if(str1.size() != str2.size()) {
    return 0;
  }

  string clockwise = str1;
  rotateClockwise(clockwise);
  rotateClockwise(clockwise);

  if(clockwise == str2) {
    return 1;
  }

  string anticlockwise = str1;
  rotateAntilockwise(anticlockwise);
  rotateAntilockwise(anticlockwise);

  if(anticlockwise == str2) {
    return 1;
  }

  return 0;
}


int main() {


// 1. Defanging an IP Address
 string str = "1.1.1.1";

 for(int i=0; i<str.size(); i++) {
  if(str[i] == '.') {
    cout << "[.]";
    continue;
  }
  cout << str[i];
 }
 
 cout << "\n";



// Using while loop
 string str1 = "255.255.243.237";
 int ind = 0;
 string ans;

 while(ind < str1.size()) {
  if(str1[ind]=='.') 
    ans += "[.]";
  else 
    ans += str1[ind];
  ind++;
 }
 
 for(auto P : ans) {
  cout << P;
 }
 
 cout << "\n";




// 2. Check if string is rotated by 2-places
  string s1 = "amazon";
  string s2 = "azonam";

  string s3 = "geeksforgeeks";
  string s4 = "geeksgeeksfor";

  cout << isRotated(s1, s2) << "\n";
  cout << isRotated(s3, s4);

  return 0;
}

```
