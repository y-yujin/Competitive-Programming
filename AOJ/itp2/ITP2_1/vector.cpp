#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int q, command, x, p;
  vector<int> A;
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> x;
      A.push_back(x);
    }else if(command == 1){
      cin >> p;
      cout << A[p] << endl;
    }else if(command == 2){
      A.pop_back();
    }
  }
  
  return 0;
}