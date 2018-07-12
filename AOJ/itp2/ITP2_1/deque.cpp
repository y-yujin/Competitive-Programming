#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
  
  int q, command, d, x, p;
  deque<int> A;
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> command;
    
    if(command == 0){
      cin >> d >> x;
      if(d == 0) A.push_front(x);
      if(d == 1) A.push_back(x);
    }else if(command == 1){
      cin >> p;
      cout << A[p] << endl;
    }else if(command == 2){
      cin >> d;
      if(d == 0) A.pop_front();
      if(d == 1) A.pop_back();
    }
  }
  
  return 0;
}