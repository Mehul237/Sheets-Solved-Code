/*

--------------------------------
01- Union of two arrays

 Using, 
  - Set
  - unordered map
--------------------------------

*/


class Solution {
    public:
  
    int doUnion(int a[], int n, int b[], int m) {

        set<int>st;
        
        for(int i=0; i<n; i++) {
            st.insert(a[i]);
        }
        for(int j=0; j<m; j++) {
            st.insert(b[j]);
        }
        return st.size();
    }
};



class Solution {
    public:

    int doUnion(int a[], int n, int b[], int m) {
        
       unordered_map<int, int> Unionans;
         
        for(int i=0; i<n; i++) {
            Unionans[a[i]]++;
        }
        
        for(int i=0; i<m; i++){
            Unionans[b[i]]++;
        }
        return Unionans.size();
    }
};
