#include <bits/stdc++.h>
using namespace std;
int n;
int col[16];
bool check(int x, int y){
  for(int i = 1; i <= x; i++){
    if(col[i]==y||abs(i-x)==abs(y-col[i])) return false;
  }
  return true;
}
bool solveQueen(int x){
  if(x>n){
    for(int i = 1; i <= n; i++){
      cout << i << " " << col[i] << endl;
    }
    return true;
  }
  for(int i = 1; i <= n; i++){
      if(check(x,i)){
        col[x] = i;
        if(solveQueen(x+1)) return true;
      }
  }
  return false;
}
int main(){
    cin >> n;
    if(!solveQueen(1)) cout << -1 << endl;
  
}