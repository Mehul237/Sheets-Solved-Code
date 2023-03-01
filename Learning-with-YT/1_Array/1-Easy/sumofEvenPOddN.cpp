 #include <bits/stdc++.h>
 using namespace std;

 int sumofEvenPOddN(vector<int> &arr) {
  int sum=0;
  for(int i=0; i<arr.size(); i++) {
    if(i%2==0) {
      sum += arr[i];
    }
    else 
     sum -= arr[i];
  }
  return sum;
}

 int main() {
  
  int n, temp; cout<<"Input-size:"; cin>>n;  vector<int> arr;
  
  for(int i=0; i<n; i++) {
    cin>>temp;
    arr.push_back(temp);
  }

  cout<<sumofEvenPOddN(arr);
    
}
