```cpp

#include <bits/stdc++.h>
using namespace std;

bool areRotation(string s1, string s2) {

// Implementation-01
    if(s1.size() != s2.size()) {
        return false;
    }

    s1 += s1;

    if(s1.find(s2) != -1) {
       return true;
    }
    return false;


// Implementation-02
//    s1 += s1;
//    return s1.find(s2) != -1;

}



int main() {

    string str1 = "abc";   // abc abc --> bca cab
    string str2 = "bca";   // abc bca

    string s1 = "mightandmagic";
    string s2 = "forgeeksgeeks";

    cout << areRotation(str1, str2) << "\n";
    cout << areRotation(s1, s2);
 
    return 0;
}


// Time Complexity: O(N*N), where N is the length of the string.
// Auxiliary Space: O(N)
```
