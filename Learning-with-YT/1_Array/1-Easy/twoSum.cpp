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

 // Coding Ninja -: https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

 vector<vector<int>> pairSum(vector<int> &arr, int s) {
  vector< vector<int> > ans;
   
  for(int i=0;i<arr.size(); i++ )
  {
   	for(int j = i+1; j<arr.size(); j++) {
      if(arr[i] +arr[j] == s)
      {
        vector<int> temp;
        temp.push_back(min(arr[i], arr[j]));
        temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
 }


  int main() {
  
  int n, temp; cout<<"Input-size:"; cin>>n;  vector<int> arr;
  
  for(int i=0; i<n; i++) {
    cin>>temp;
    arr.push_back(temp);
  }

  int targetsum; cout<<"Target Sum:"; cin>>targetsum; cout<<twoSum(arr, targetsum);
   
}
