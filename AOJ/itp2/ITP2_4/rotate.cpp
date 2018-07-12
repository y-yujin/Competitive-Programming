#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, b, m, e;
  
  cin >> n;
  vector<int> A(n);
  vector<int>::iterator a = A.begin();
  for(int i = 0;i < n;i++) cin >> A[i];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> b >> m >> e;
    rotate(a + b, a + m, a + e);
  }
  
  for(int i = 0;i < n;i++){
    cout << (i?" ":"");
    cout << A[i];
  }
  cout << endl;
  
  return 0;
}