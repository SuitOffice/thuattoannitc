#include <bits/stdc++.h>
using namespace std;
int n, current_cost, best_cost;
int arr[16][16];
int visited[16], x[16];
void intput(){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cin >> arr[i][j];
    }
  }
  current_cost = 0;
  visited[1] = 1;
  x[1] = 1;
  best_cost = 1e9 + 7;
}
void Try(int i){
  for(int y = 2; y <= n; y++){
    if(!visited[y]){
      x[i] = y;
      visited[y] = 1;
      current_cost += arr[x[i-1]][y];
      if(i==n){
        if(current_cost + arr[y][1] < best_cost) best_cost = current_cost + arr[y][1];
      }
      else if(current_cost<best_cost) Try(i+1);
      current_cost -= arr[x[i-1]][y];
      visited[y] = 0;

    }
  }
}


int main(){
   cin >> n;
   intput();
   Try(2);
   cout << best_cost;
  
}