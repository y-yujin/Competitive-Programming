#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n;
  
  cin >> n;
  vector<int> A(n);
  for(int i = 0;i < n;i++) cin >> A[i];
  
  if(prev_permutation(A.begin(), A.end())){
    for(int i = 0;i < n;i++){
      cout << (i?" ":"");
      cout << A[i];
    }
    cout << endl;
  }
  next_permutation(A.begin(), A.end());
  
  for(int i = 0;i < n;i++){
    cout << (i?" ":"");
    cout << A[i];
  }
  cout << endl;
  
  if(next_permutation(A.begin(), A.end())){
    for(int i = 0;i < n;i++){
      cout << (i?" ":"");
      cout << A[i];
    }
    cout << endl;
  }
  
  return 0;
}