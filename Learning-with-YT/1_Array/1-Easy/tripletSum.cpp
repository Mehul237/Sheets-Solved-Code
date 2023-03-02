 #include <bits/stdc++.h>
 using namespace std;

 int twoSum(vector<int> &arr, int pairsTwosum) {
  int count=0;

  for(int i=0; i<arr.size(); i++) {
    for(int j=i+1; j<arr.size(); j++) {
      if(arr[i]+arr[j]==pairsTwosum) 
        count++;
   }
  }
  return count;
}

 
 int TripletSum(vector<int> &arr, int x) { 
 int count=0;

  for(int i=0; i<arr.size(); i++) {
    for(int j=i+1; j<arr.size(); j++) {
      for(int k=j+1; k<arr.size(); k++) {
        if(arr[i]+arr[j]+arr[k]==x) {
          count++;
        }
      }
    }
  }
  return count;   
}

 int main() {
  
  int n, temp; cout<<"Input-size:"; cin>>n;  vector<int> arr;
  
  for(int i=0; i<n; i++) {
    cin>>temp;
    arr.push_back(temp);
  }

  int targetsum; cout<<"Target Sum:"; cin>>targetsum; cout<<twoSum(arr, targetsum);
  int targetsum; cout<<"Target Sum:"; cin>>targetsum; cout<<TripletSum(arr, targetsum);
 
}
