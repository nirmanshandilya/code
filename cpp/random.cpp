#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, xor1=0, xor2=0;
  cin>>n;
  vector<int> arr(n-1);
  for(int i=0;i<n-1;i++){
    cin>>arr[i];
    xor2^=arr[i];
  }
  for(int i=0;i<n;i++){
    xor1^=(i+1);
  }
  cout<<(xor1^xor2)<<endl;
}

