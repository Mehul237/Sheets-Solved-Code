
1. [Defanging an IP Address -- Leetcode](https://leetcode.com/problems/defanging-an-ip-address/description/)
2. [Check if string is rotated by two places -- GFG](https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1)

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

 3. [Check if the Sentence Is Pangram -- Leetcode](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)


```cpp

#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram1(string sentence) {

  vector<int> alphabets(26, 0);

  for(int i=0; i<sentence.size(); i++) {    // O(N)
    int ind = sentence[i] - 'a';
    alphabets[ind]++;
  }
  for(int i=0; i<26; i++) {     // O(1)
    if(alphabets[i] == 0) 
      return false;
  }
  return true;
}


bool checkIfPangram2(string sentence) {

  vector<bool> alphabets(26, 0);

  for(int i=0; i<sentence.size(); i++) {
    alphabets[sentence[i] - 'a'] = 1;
  }
  for(int i=0; i<26; i++) {
    if(alphabets[i] == 0) 
      return 0;
  }
  return 1;
}


int main() {

  string sentence1 = "leetcode";
  string sentence2 = "thequickbrownfoxjumpsoverthelazydog";

  if(checkIfPangram1(sentence1)) {
    cout << "1-Yes\n";
  } else {
    cout << "1-No\n";
  }

  cout << (checkIfPangram2(sentence2) ? "2-Yes\n" : "2-No\n");


  return 0;
}


// TC: O(N) + O(26) = O(N)
// SC: O(1)
```

 4. [Sort a String -- GFG](https://www.geeksforgeeks.org/problems/sort-a-string2943/1)

```cpp

#include <bits/stdc++.h>
using namespace std;

string sortAstring(string &s) {

  vector<int>alpha(26, 0);
  string ans;

  for(int i=0; i<s.size(); i++) {    // O(N)
    alpha[s[i]-'a']++;
  }

  for(int i=0; i<26; i++) {  

    // convert into character  --> 'a' + 0 = a, 'a' + 1 = b
    char c = 'a' + i;
    
    // How many times print
    while(alpha[i]) {      // alpha[0] = 2 (means a how many times occur)
      ans += c;            // add into ans string, until does't become zero
      alpha[i]--;
    }
  }
  return ans;
}

// TC: O(N)
// SC: O(N)




// Optimized using sorting algo -- Implement Merge or quicksort
string sortAstring1(string &s) {
  sort(s.begin(), s.end());
  return s;
}

// TC: O(n logN)
// SC: O(N)


int main() {


  string sentence1 = "eadcab";
  string sentence2 = "apple";

  cout << "Sorted string: " << sortAstring(sentence1) << "\n";
  cout << "Sorted string: " << sortAstring1(sentence2);

  return 0;
}

```
