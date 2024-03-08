[Similar concept -- 3005. Count Elements With Maximum Frequency](https://leetcode.com/problems/count-elements-with-maximum-frequency/description/?envType=daily-question&envId=2024-03-08)


## Q-3: Find Duplicate characters in a string

## Brute-force approach
### Intuition
 - Store the characters count of a string in an unordered map which allows operations in constant time
 - Then, print the characters which have a frequency greater than 1

### Steps to implement the above approach:
 - Declare a unordered map of the char-int pair.
 - Traverse the string using a loop and increase the count of the present char in the map.
 - Iterate through the map and print a character that has a value greater than one in map.

<br>

```cpp

#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string s) {

    unordered_map<char, int> freq;

    for(int i=0; i<s.size(); i++) {
        freq[s[i]]++;
    }

    // iterating through the unordered map
    for(auto it : freq) {
        // if the count of characters is greater than 1 then duplicate found
        if(it.second > 1) {
            cout << it.first << ", count = " << it.second << "\n";
        }
    }
}


int main() {

    string str = "MehulThuletiya";
    printDuplicates(str);

    return 0;
}
```

--------------------------------------------------------------------------------------------------------------------
>  <em> **Time Complexity:** O(N) </em>                                                                                    
>   - Where N = length of the string passed and it takes O(1) time to insert and access any element in an unordered map 
>
>  <em> **Auxiliary Complexity:** O(N) </em>
>  - Where n = size of the map (0 <= n <= input_string_length), in worst case space will be O(N).
--------------------------------------------------------------------------------------------------------------------

<br>


## Optimized approach

### Intuition
 - If we sort the string then all duplicates will come together in the string.
 - Then, traverse the string from starting index to the ending index and check if the neighbor character is same then increment the count by 1.

### Steps to implement the above approach:
 - Sort the given string.
 - Loop through the sorted string to find the duplicates.
 - If the next character is the same as the current character then we keep on counting the occurrence of that char.
 - If the count is greater than one then we print the character and its count.

###

```cpp
#include <bits/stdc++.h>
using namespace std;


void printDuplicates(string str) {

    // Sorting the characters of the string in ascending order
    sort(str.begin(), str.end());

   // Loop through the sorted string to find duplicates
   for (int i=0; i<str.size(); i++) {
        int count = 1;

        // Counting the occurrences of each character
        for (; i < str.size()-1 && str[i] == str[i + 1]; i++) {
            count++;
        }

        // Printing the duplicate character and its count
        if(count > 1) {
            cout << str[i] << ", count = " << count << endl;
        }
    }
}



int main() {

    string str = "MehulThuletiya";
    printDuplicates(str);

    return 0;
}
```

```cpp
void printDuplicates(string str) {

    // Sorting the characters of the string in ascending order
    sort(str.begin(), str.end());

    // Loop through the sorted string to find duplicate characters
    for (int i=0; i<str.size(); i++) {

        // Initialize the count of occurrences of the current character
        int cnt = 1;  

        // Count the occurrences of each character
        while (i < str.size() - 1 && str[i] == str[i + 1]) {
            cnt++;    // Increment the count if consecutive characters are the same
            i++;      // Move to the next character
        }

        // If count is greater than 1, then it's a duplicate character
        if (cnt > 1) {
            cout << str[i] << ", count = " << cnt << "\n";  
        }
    }
}
```
--------------------------------------------------------------------------------------------------------------------
>  <em> **Time Complexity:** O(N*logN) </em>
>   - Where N is the length of the string 
>
>  <em> **Auxiliary Complexity:** O(1) </em>
>  - if you observe We did not use any extra space.
--------------------------------------------------------------------------------------------------------------------
  
