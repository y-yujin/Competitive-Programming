#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, command, t, x;
  
  cin >> n;
  stack<int> S[n];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> t >> x;
      S[t].push(x);
    }else if(command == 1){
      cin >> t;
      if(S[t].size()) cout << S[t].top() << endl;
    }else if(command == 2){
      cin >> t;
      if(S[t].size()) S[t].pop();
    }
  }
  
  return 0;
}