
/*
-------------------------------------
Approach:  2-pointer

Time Complexity: O(n)
  - where n is the length of the input string
Space Complexity: O(1)
  - No need to extra space
-------------------------------------
*/


class Solution {
public:	
	int isPalindrome(string S) {
	    
	    int i = 0, j = S.size()-1;
	    
	    while(i < j) {
	        if(S[i++] != S[j--])    
	           return 0;             // Not a palindrome
	    }
	    return 1;
	}
};





/*
--------------------------------------------------------------------------------------------------------------------------
Intuitoin: 
  --> Traverse through half of the string and for every index check that if ith and n-ith characters are same or not

Explanation:

  1 - Run a loop  that iterates over the first half of the filtered string.
  2 - s[i] != s[len(s) - i - 1], 
    -- This line compares the characters at the i-th position and the corresponding position from the end of the string. 
        If they are not equal, it means the string is not a palindrome.
  3 - If the loop completes without finding any unequal characters, the function returns True, 
      indicating that the string is a palindrome

Time Complexity:  O(n), 
   - where n is the length of the original string as we are traversing the half string.
Space Complexity: O(1), 
   - no extra space used.
--------------------------------------------------------------------------------------------------------------------------
*/




class Solution {
public:

    //Function to check if a string is a palindrome.
    int isPalindrome(string S)
    {
        //Iterating only over the first half of the string.
        //If the characters don't match at symmetric positions,
        //return 0.
      
        for(int i = 0; i < S.size()/2; i++)
            if(S[i] != S[S.size() - i - 1])
                return 0;

        //If all characters match, the string is a palindrome.
        return 1;
    }
};
