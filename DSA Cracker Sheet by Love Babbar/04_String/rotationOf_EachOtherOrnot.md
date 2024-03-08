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
```
--------------------------------------------------------------------------------------------------------------------
>  <em> **Time Complexity:** O(N*N) ~ O(N) </em>                                                                            
>  1. String Concatenation: The concatenation operation takes O(N) time
>  2. Substring Search: he substring search operation also takes O(N) time
>   - Since both operations are performed sequentially,
>   - the overall time complexity is O(N + N) ~ O(N), where N is the length of the string.
>
>  <em> **Auxiliary Complexity:** O(N) </em>
>  - The only additional space used in the function is for the concatenated string s1.
>  - Since it's the concatenation of s1 with itself, the space required is O(N).
--------------------------------------------------------------------------------------------------------------------


```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {

    string str1 = "abc";   // abc abc --> bca cab
    string str2 = "bca";   // abc bca
    
    // This operation concatenates the string str1 with itself. 
    // Since str1 has a length of n, the concatenation operation takes O(n) time.
    string ans = str1 + str1;

    if(str1.size() != str2.size()) {
        cout << "No";
    }

// - The find() fn is used to search for the substring str2 within the string ans. 
// - The TC of the find() fn is typically O(n), where n is the length of the string being searched in ans in this case. 
// - Since ans has a length of 2 * n (because it's the concatenation of str1 with itself), 
//   the TC of this operation is O(2 * n), which simplifies to O(n).

    if(ans.find(str2) != string :: npos) {
        cout << "Yes";
    } else cout << "No";

    return 0;
}
```
