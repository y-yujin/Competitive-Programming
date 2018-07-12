#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
  
  int q, command, x, d;
  list<int> L;
  list<int>::iterator it = L.end();
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    if(command == 0){
      cin >> x;
      it = L.insert(it, x);
    }else if(command == 1){
      cin >> d;
      if(d > 0) for(int i = 0;i < d;i++) ++it;
      else for(int i = 0;i < -d;i++) --it;
    }else if(command == 2){
      it = L.erase(it);
    }
  }
  
  for(it = L.begin();it != L.end();it++) cout << *it << endl;
  
  return 0;
}