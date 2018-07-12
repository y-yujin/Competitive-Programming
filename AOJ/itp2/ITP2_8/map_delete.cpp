#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  
  int q, com, x;
  string key;
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
    }else if(com == 2){
      cin >> key;
      M.erase(key);
    }
  }
  
  return 0;
}