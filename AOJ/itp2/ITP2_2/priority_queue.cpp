#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, command, t, x;
  
  cin >> n;
  priority_queue<int> Q[n];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> t >> x;
      Q[t].push(x);
    }else if(command == 1){
      cin >> t;
      if(Q[t].size()) cout << Q[t].top() << endl;
    }else if(command == 2){
      cin >> t;
      if(Q[t].size()) Q[t].pop();
    }
  }
  
  return 0;
}
