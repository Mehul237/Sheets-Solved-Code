/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +
------------------------------------------------------------------------------------------------------------------------

***********************
 Mehul Thuletiya      *
 CF: Mehul_Thuletiya  *
 CC: mehul_237        *
***********************

*/

 #include <bits/stdc++.h>
 using namespace std;

 #define ll long long int 
 #define nline "\n"

 /*
 ------------------------------------------------------------------------------------------------------
 1. Find the maximum value out of all the elements                                                    +
                                                                                                      +
 Trick-1: Using *max-min_element (first_index, last_index);                                           +
                   *max_element(arr, arr+size);                                                       +
                   *min_element(arr, arr+size);
             Complexity:                                                                              +
         -> Time: 0(n)                                                                                +
         -> Space: 0(n), It's Depend upon an user, How it's gives the value size smaller or larger.   +
                                                                                                      +
 Trick-2: Array to Function                                                                           +
             Complexity:                                                                              +
         -> Time: 0(n), to traverse the Array completely                                              +
         -> Space: 0(1), as only an extra variable is created, which will take O(1) space             +
                                                                                                      +
 Trick-3 Using Vector
        read: https://www.geeksforgeeks.org/how-to-find-the-minimum-and-maximum-element-of-a-vector-using-stl-in-c/?ref=rp
        
        
 ------------------------------------------------------------------------------------------------------
 */


int largest(int arr[], int size)
{
  // Initialize maximum element
  int max = arr[0];
  
  // Traverse array elements from second and compare every element with current max 
  for (int i = 1; i < size; i++)
    if (arr[i] > max)
      max = arr[i];
  
  return max;
}


 int main()
{


  // 1. *max_element
 /*
-------------------------------------------------------------------------------------------------
  // User input, Size and intialization
  int size; cin>>size; int arr[size];

  // Taking input from user
  for(int &input: arr) cin>>input;

  // We can use the max_element() function present in header file to get the maximum element
  cout << "Max Element is: " << *max_element(arr, arr + size);
------------------------------------------------------------------------------------------------
 */


  // 2. Array to function
/*
------------------------------------------------------------------
 // It's not depend on User input
  int arr[] = {10, 324, 45, 90, 9808};
  int n = sizeof(arr) / sizeof(arr[0]);

  int size; cin>>size; int arr[size];
  for(int &input: arr) cin>>input;
  cout << "Largest in given array is " << largest(arr, size);
------------------------------------------------------------------
*/
  
  // 3. Using Vector   read: https://www.codespeedy.com/take-user-input-into-vector-in-cpp/#:~:text=The%20basic%20way%20is%20if,below%20to%20understand%20it%20better.&text=Example%20code%202%20%3A,as%20much%20as%20they%20want.

  
  int size, tempVar; 
  cout<<"Size:";
  cin>>size; 
  vector<int>v;

  for(int i=0; i<size; i++) {
    cin>>tempVar;
    v.push_back(tempVar);
  }

  for(auto &output : v) {
    cout<<output<<" ";
  }
  cout<<nline;

  cout << "\nMin Element:"<< *min_element(v.begin(), v.end());
  cout << "\nMax Element:"<< *max_element(v.begin(), v.end());

  return 0;
}
