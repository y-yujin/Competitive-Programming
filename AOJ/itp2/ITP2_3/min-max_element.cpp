#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, com, b, e;
  
  cin >> n;
  vector<int> A(n);
  vector<int>::iterator a = A.begin();
  for(int i = 0;i < n;i++) cin >> A[i];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> com >> b >> e;
    if(com == 0) cout << *min_element(a + b, a + e) << endl;
    else if(com == 1) cout << *max_element(a + b, a + e) << endl;
  }
  
  return 0;
}