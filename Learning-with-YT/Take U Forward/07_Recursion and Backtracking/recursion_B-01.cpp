#include <bits/stdc++.h>
using namespace std;

int factorial (int number) {
    if(number==0)  // Base Condtion
      return 1;
    
    return number * factorial(number-1);   // Recursive relation
}

void printname(int i, int n) {
  if(i>n) 
    return;
  cout << "Mehul"<<"\n";
  printname (i+1, n);

  // Article link -> https://takeuforward.org/recursion/print-name-n-times-using-recursion/
}

void onetoN(int i, int n) {  // Similar to the printname
  if(i>n) 
    return;
  cout << i << " " << n <<"\n";
  onetoN(i+1,n);

  // Article link -> https://takeuforward.org/recursion/print-1-to-n-using-recursion/
}

void ntoOne(int n) {
  if(n==0)
    return;
  cout<< n <<"\n";
  ntoOne(n-1);
}

void otherwayToNto1(int i, int n) {
  if(i<1) 
    return;
  cout << i << " " << n << "\n";
  otherwayToNto1(i-1, n);
}

/*
-----------------------------------------------
 Don't allow to use + Operator  ->  f (i+1, n);
 Don't allow to use - Operator  ->  f (i-1, n);
 
 Using Backtracking 
 -> print 1 to N 
 -> print N to 1 
-----------------------------------------------
*/

void oneToNbacktracking(int i, int n) {
  if(i<1)
    return;
  oneToNbacktracking(i-1, n);
  cout << i << " " << n << "\n"; 
}

void nToOnebacktracking(int i, int n) {
  if(i>n) 
    return;
  nToOnebacktracking(i+1, n);
  cout << i << " " << n << "\n"; 
}

int main () {

/*
  int number; cout<<"Input the number to find the Factorial-"; cin>>number;

  int answer = factorial(number);
  cout<<"Answer -> "<< answer;
*/


  int n; cout<<"Enter a number -> "; cin>>n;
  
  /*
------------------------------------------------------------------------------
  Article link -> https://takeuforward.org/category/recursion/
  Codeforces ->  https://codeforces.com/blog/entry/92031
  Recursion -> printname(1,n); onetoN(1,n); ntoOne(n); otherwayToNto1(n, n); 
  Backtracking ->  oneToNbacktracking(n, n); nToOnebacktracking(1,n); 
-------------------------------------------------------------------------------
  */



  return 0;
}
