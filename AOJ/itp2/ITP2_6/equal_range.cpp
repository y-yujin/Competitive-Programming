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
    int dis_l, dis_u;
    
    cin >> k;
    dis_l = distance(A.begin(), lower_bound(A.begin(), A.end(), k));
    dis_u = distance(A.begin(), upper_bound(A.begin(), A.end(), k));
    
    cout << dis_l << " " << dis_u << endl;
  }
  
  return 0;
}