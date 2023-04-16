

class Solution {
    public:

/* 
-----------------------------------------------------------------------------------------
    arr : given array
    l : starting index of the array i.e 0
    r : ending index of the array i.e size-1
    k : find kth smallest element and return using this function
  
Question-Smallest -> https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
Question-Largest -> https://www.geeksforgeeks.org/k-largestor-smallest-elements-in-an-array/

Video reference 
     Smallest -> https://youtu.be/O2qhSwSf8HQ
     Largest -> https://youtu.be/3DdP6Ef8YZM
-----------------------------------------------------------------------------------------
*/

    int kthSmallest(int arr[], int l, int r, int k) {
  
   /*
   -----------------------------
        sort(arr,arr+r+1);
        return arr[k-1];
   ----------------------------
   */
        priority_queue <int> maxHeap;
        for(int i = l; i <= r; i++) {
            maxHeap.push(arr[i]);
            if(maxHeap.size() > k) {
                maxHeap.pop();
            }
          
        }
        return maxHeap.top();
    }    
};
