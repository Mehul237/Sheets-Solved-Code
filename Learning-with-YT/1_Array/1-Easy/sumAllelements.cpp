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
 ----------------------------------------------------------------------------------------------------------------------
 1. Sum of all elements in array                                                +
                                                                                +
 STEP-1: Taking input 'n' and sum=0 initialize and 1-for loop for Input         +
 STEP-2: 2-and for loop for Iterating the Array and calculating sum of all ele  +

 Complexity:
  -> Time: 0(n)
  -> Space: 0(n)
  
  Article link ->  https://www.geeksforgeeks.org/how-to-find-the-sum-of-elements-of-an-array-using-stl-in-c/?ref=rp
 ----------------------------------------------------------------------------------------------------------------------
 */

void solve() 
{
  // Taking Input from User
  int n,sum=0; cin>>n; int arr[n];

  // For-loop for input user values
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }
 
    cout <<"\nTrick_1-Sum: "<< accumulate(arr, arr + n, 0);
   
  // For-loop for sum of all element until the arr not end!
  for(int i=0; i<n; i++) {
    sum += arr[i];
  }
  cout<<nline;

  cout<<"Trick_2-Sum: "<<sum;

} 


int main()
{
  int t; cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
