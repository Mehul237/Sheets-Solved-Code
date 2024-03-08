
[1. Roman to Integer -- Leetcode](https://leetcode.com/problems/roman-to-integer/)

```cpp

#include <bits/stdc++.h>
using namespace std;

// 0. Conditon + While loop
int currCharToNum(char s) {
    if (s == 'I') {
        return 1;
    } else if (s == 'V') {
        return 5;
    } else if (s == 'X') {
        return 10;
    } else if (s == 'L') {
        return 50;
    } else if (s == 'C') {
        return 100;
    } else if (s == 'D') {
        return 500;
    } else {
        return 1000;
    }
}

int romanToint1(string s) {
    int ind = 0;
    int sum = 0;

    while (ind < s.size() - 1) {
        if (currCharToNum(s[ind]) < currCharToNum(s[ind + 1])) {
            sum -= currCharToNum(s[ind]);
        } else {
            sum += currCharToNum(s[ind]);
        }
        ind++;
    }

    // Last ele in string
    sum += currCharToNum(s[s.size() - 1]);
    return sum;
}




// 1. Using unordered map + Iterative for loop
int romanToint(string s) {

    unordered_map<char, int> m;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int sum = 0;

    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] < m[s[i + 1]]) {
            sum -= m[s[i]];
        } else {
            sum += m[s[i]];
        }
    }
    return sum;
}


int main() {

    string s1 = "MCMXCIV";
    cout << "Brute force: " << romanToint1(s1) << "\n";

    string s2 = "LVIII";
    cout << "Using In-built: " << romanToint(s2) << "\n";

    return 0;
}
```

<br>

[2. Integer to Roman -- Leetcode](https://leetcode.com/problems/integer-to-roman/description/)

```cpp
class Solution {
public:
    string intToRoman(int num) {

        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40,   10,  9,   5,   4,   1};
        vector<string> numerals = {"M",  "CM", "D",  "CD", "C",  "XC", "L", "XL", "X",  "IX", "V",  "IV", "I"};

        string result = "";

        for (int i=0; i<values.size(); i++) {
            while (num >= values[i]) {
                result += numerals[i];
                num -= values[i];
            }
        }
        return result;
    }
};
```


```cpp
class Solution {
public:
    string intToRoman(int num) {

        string Roman = "";
        // Creating vector of pairs to store the Roman numeral values and their corresponding symbols
        vector<pair<int, string>> storeIntRoman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

        // Iterating through the vector and repeatedly adds the corresponding symbols to the result string while subtracting the corresponding value from the input integer until the input integer becomes zero.
        for (int i = 0; i < storeIntRoman.size(); i++) {
            while (num >= storeIntRoman[i].first) {
                Roman += storeIntRoman[i].second;
                num -= storeIntRoman[i].first;
            }
        }
        return Roman;
    }
};

// time complexity - O(1) since the algorithm always iterates through a constant number of values (13 in this case)
// O(1) since the amount of extra space used is constant (the size of the storeIntRoman vector, which is also 13 in this case)

// Time complexity: O(13) ~ O(1)
// Space complexity: O(13) ~ O(1)
```


```cpp
class Solution {
public:
    string intToRoman(int num) {

        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[] =  {"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};
```
