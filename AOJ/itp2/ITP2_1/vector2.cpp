#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, command, t, x;
  
  cin >> n >> q;
  vector< vector<int> > A(n);
  
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> t >> x;
      A[t].push_back(x);
    }else if(command == 1){
      cin >> t;
      for(vector<int>::iterator it = A[t].begin();it != A[t].end();it++){
        cout << (it == A[t].begin()?"":" ");
        cout << *it;
      }
      cout << endl;
    }else if(command == 2){
      cin >> t;
      A[t].erase(A[t].begin(), A[t].end());
    }
  }
  
  return 0;
}