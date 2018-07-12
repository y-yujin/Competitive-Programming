#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, k;
  
  cin >> n;
  vector<int> A(n);
  for(int i = 0;i < n;i++) cin >> A[i];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> k;
    cout << binary_search(A.begin(), A.end(), k) << endl;
  }
  
  return 0;
}