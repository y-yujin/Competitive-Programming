#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  
  int q, com, x;
  string key, l, r;
  map<string, int> M;
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> com;
    
    if(com == 0){
      cin >> key >> x;
      M[key] = x;
    }else if(com == 1){
      cin >> key;
      cout << M[key] << endl;
      if(M[key] == 0) M.erase(key);
    }else if(com == 2){
      cin >> key;
      M.erase(key);
    }else if(com == 3){
      map<string, int>::iterator itl, itr;
      
      cin >> l >> r;
      itl = M.lower_bound(l);
      itr = M.upper_bound(r);
      
      for(map<string, int>::iterator it = itl;it != itr;it++) cout << it->first << " " << it->second << endl;
    }
  }
  
  return 0;
}