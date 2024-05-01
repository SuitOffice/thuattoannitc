#include <bits/stdc++.h>
using namespace std;
int ATM(int n, int arr[], int T){
  vector<int> d(T+1,INT_MAX);
  d[0] = 0;
  for(int i = 0; i < n; i++){
    for(int j = T; j >= arr[i]; j--){
      if(d[j-arr[i]]!=INT_MAX)d[j] = min(d[j],d[j-arr[i]]+1);
    }
  }
  return d[T] == INT_MAX ? -1 : d[T];
}
int main(){
  int n; cin >> n; int T; cin >> T; int arr[n];
 for(int i = 0; i < n; i++) cin >> arr[i];
 cout << ATM(n,arr,T);
}