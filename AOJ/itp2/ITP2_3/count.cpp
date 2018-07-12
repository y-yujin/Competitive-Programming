#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, b, e, k;
  
  cin >> n;
  vector<int> A(n);
  vector<int>::iterator a = A.begin();
  for(int i = 0;i < n;i++) cin >> A[i];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> b >> e >> k;
    cout << count(a + b, a + e, k) << endl;
  }
  
  return 0;
}