
[2. Sorting the Sentence -- Leetcode](https://leetcode.com/problems/sorting-the-sentence/description/)

```cpp

#include <bits/stdc++.h>
using namespace std;


string sortSentence(string s) {
    
    // first we create a vector to store our ans 
    vector<string> ans(10);

    // then after that we have to create a temp str to access every word and store them in the required position of the ans;  
    string temp;
    int count = 0, ind = 0;;    
        
    while (ind < s.size()) {
        if(s[ind] == ' ') {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[ind];
        }
        ind++;
    }
        
    // for the last case where we do not encouter any space and their is still one word left 
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    count++;
        
    // Construct the sorted sentence
    temp.clear();
        
    // storing the string vector in the temp string
    for(int i=1; i<=count; i++) {
        temp += ans[i];
        temp += " ";
    }
    
    // Remove the trailing space
    temp.pop_back(); 
    return temp;
}




int main() {

  string s = "is2 sentence4 This1 a3";
  cout << sortSentence(s);

  return 0;

}

```
