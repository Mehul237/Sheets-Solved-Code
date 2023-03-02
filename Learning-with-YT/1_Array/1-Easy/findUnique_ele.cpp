int findUnique(int *arr, int size) {
  int ans = 0;
  for(int i = 0; i<size; i++) {
    ans = ans^arr[i];
  }
  return ans;
}


/*
------------------------------------
int findUnique(vector<int> &a){
  int n = a.size();
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]==a[j]){
        a[i] = a[j] = -1;
      }
    }
  }

  for(int i=0;i<n;i++)
    if(a[i]>0)
      return a[i];
  return -1;
}
----------------------------------
*/
