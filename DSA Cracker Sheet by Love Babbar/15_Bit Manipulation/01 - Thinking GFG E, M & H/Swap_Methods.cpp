#include <bits/stdc++.h>
using namespace std;

int main () {


  
/*
------------------------------------------------------

- - - - - - - - - - - - - - - - 
Method 0 (Using temp variable)
- - - - - - - - - - - - - - - -

    int a = 10, b = 5;

    int temp = a;  // temp store the value of A: 10
    a = b;         // A store the value of B: 5
    b = temp;      // B store the value of temp: 10
------------------------------------------------------
*/




  

  
/*
-----------------------------------------------------------------------------

- - - - - - - - - - - - - - - - - - - - - -
Method 1 (Using Addition and subtraction)
- - - - - - - - - - - - - - - - - - - - - -


The idea is to get a sum in one of the two given numbers. 
The numbers can then be swapped using the sum and subtraction from the sum

    int x = 10, y = 5;

    // Code to swap 'x' and 'y'
    x = x + y;        // x now becomes 15
    y = x - y;        // y becomes 10
    x = x - y;        // x becomes 5
    cout << "After Swapping: x = " << x << ", y= " << y;

TC: O(1)
SC: O(1)
-----------------------------------------------------------------------------
*/




  
// Method 2 (Using Bitwise XOR)

    int a = 5, b = 7;

    cout << "A: " << a << " " << "B: " << b << "\n"; 

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After A: " << a << " " << "After B: " << b;  





  
/*
--------------------------------------------------------------------------------------------------------
 
   Bit manipulation: https://www.geeksforgeeks.org/swap-two-numbers-without-using-temporary-variable/


   (1)  a  = a ^ b

        1 0 1  (5)
     ^  1 1 1  (7)
        ----- 
        0 1 0  (2)


   (2) b = a ^ b

        0 1 0 (2)
     ^  1 1 1 (7)
        -----
        1 0 1 (5)  -> Correct

    
   (3) a = a ^ b

       0 1 0 (2)
     ^ 1 0 1 (5)
       -----
       1 1 1 (7)  -> Correct

--------------------------------------------------------------------------------------------------------
*/     


   return 0;

}
