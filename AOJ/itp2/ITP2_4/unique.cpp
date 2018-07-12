#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n;
  
  cin >> n;
  vector<int> A(n);
  for(int i = 0;i < n;i++) cin >> A[i];
  
  A.erase(unique(A.begin(), A.end()), A.end());
  for(int i = 0;i < A.size();i++){
    cout << (i?" ":"");
    cout << A[i];
  }
  cout << endl;
  
  return 0;
}