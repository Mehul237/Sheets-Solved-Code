

/*
----------------------------------------------------------------------------------------------------------------------
Intuition:
 If a number N is a power of 2, 
  - then the bitwise AND of N and N-1 will be 0. 
  - But this will not work if N is 0. 

 So just check these two conditions, 
 if any of these two conditions is true.


 CP Tricks: 
   - https://www.geeksforgeeks.org/bit-tricks-competitive-programming/

   - https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/

 (1) x && !(x & x-1)
     - Checking if given 32-bit integer is power of 2


Logic:
All the power of 2 have only single bit set 

e.g.  16 (00010000). 

- If we minus 1 from this, all the bits from LSB to set bit get toggled, i.e., 16-1 = 15 (00001111). 
- Now if we AND x with (x-1) and the result is 0 then we can say that x is power of 2 otherwise not. 
- We have to take extra care when x = 0


Example:

x = 16         (00010000) 
x – 1 = 15     (00001111) 
x & (x-1) = 0 
so, 16 is power of 2
 
----------------------------------------------------------------------------------------------------------------------
*/




// Fn to check if x is power of 2
bool isPowerOfTwo(int x) 
{  
  
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return x && (!(x & (x - 1)));

  
  /*    Alternate wrting style for easy to understand
   --------------------------------------------------
     if(x == 0)
        return false;
     if(x & (x-1) == 0) 
        return true;
     return false;
   --------------------------------------------------
  */

  
}
