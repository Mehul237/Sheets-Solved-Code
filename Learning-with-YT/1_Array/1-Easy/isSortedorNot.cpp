 #include <bits/stdc++.h>
 using namespace std;

 bool isSorted(vector<int> &arr) {
  bool ans=true;
  for (int i=1; i <arr.size()-1; i++) {
    if (arr[i] < arr[i-1]) {
      ans=false;
    }
  }
  return ans;
 }

 int main() {
  
  int n, temp; cout<<"Input-size:"; cin>>n;  vector<int> arr;
  
  for(int i=0; i<n; i++) {
    cin>>temp;
    arr.push_back(temp);
  }
    
  if (isSorted(arr)) {
    cout << "The array is sorted" << endl;
  }
  else 
    cout << "The array is not sorted" << endl;
   
  return 0;

  
 }
