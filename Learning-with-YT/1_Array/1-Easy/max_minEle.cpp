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
 --------------------------------------------------------------------------------
 1. Finding Max and Min element                                                 +
                                                                                +
 STEP-1: Taking the input 'n' and declaring an Integer Array of sive 'n'        +
 STEP-2: Iterating the Array and calculating the maximum and minimum elements   +
                                                                                +
 Complexity:                                                                    +
  -> Time: 0(n)                                                                 +
  -> Space: 0(1)                                                                +
 --------------------------------------------------------------------------------
 */

void solve() 
{
  // Taking Input from User
  int n; cin>>n; int arr[n];

  // For-loop for input user values
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  // In-built the min, max value
  int maxNo=INT_MIN;
  int minNo=INT_MAX;

  // For-loop for Compared and print the Max & Min values
  for(int i=0; i<n; i++) {
    maxNo=max(maxNo, arr[i]);
    minNo=min(minNo, arr[i]);
  }


/*
  Comparison with Old-Method takes the huge time to write.

  for(int i=0; i<n; i++) {
    if(arr[i] > maxNo) {
    maxNo = arr[i];
    }
    
    if(arr[i] < minNo) {
    minNo = arr[i];
  }
  }

*/

  cout<<"Max-No: "<<maxNo<<"\n";
  cout<<"Min-No: "<<minNo;

} 


int main()
{
  int t; cin>>t;
  while(t--) {
    solve();
  }
  return 0;
}
