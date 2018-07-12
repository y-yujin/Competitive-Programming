#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){
  
  int q, com, x;
  set<int> S;
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> com;
    
    if(com == 0){
      cin >> x;
      S.insert(x);
      cout << S.size() << endl;
    }else if(com == 1){
      cin >> x;
      cout << S.count(x) << endl;
    }else if(com == 2){
      cin >> x;
      S.erase(x);
    }
  }
  
  return 0;
}