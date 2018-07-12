#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
  
  int n, q, command, s, t, x; 
  
  cin >> n;
  list<int> L[n];
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> t >> x;
      L[t].push_back(x);
    }else if(command == 1){
      cin >> t;
      for(list<int>::iterator it = L[t].begin();it != L[t].end();it++){
        if(it != L[t].begin()) cout << " ";
        cout << *it;
      }
      cout << endl;
    }else if(command == 2){
      cin >> s >> t;
      L[t].splice(L[t].end(), L[s]);
    }
  }
  
  return 0;
}