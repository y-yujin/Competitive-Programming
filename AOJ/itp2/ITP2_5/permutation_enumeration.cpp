#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  
  int n;
  
  cin >> n;
  vector<int> A(n);
  for(int i = 0;i < n;i++) A[i] = i + 1;
  
  do{
    for(int i = 0;i < n;i++){
      cout << (i?" ":"");
      cout << A[i];
    }
    cout << endl;
  }while(next_permutation(A.begin(), A.end()));
  
  return 0;
}