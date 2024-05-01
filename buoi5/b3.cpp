#include <bits/stdc++.h>
using namespace std;
string two(string a, string b){
  int cnt = 0;
  for(int i = 0, y = 0; i < a.size(), y < b.size(); i++, y++){
    if(a[i]!=b[i]) break;
    ++cnt;
  }
  return a.substr(0,cnt);
}
string check(vector<string> a, int l, int r){
  if(l==r) return a[l];
  if(l<r){
    int mid = (l+r)/2;
    string left = check(a,l,mid);
    string right = check(a,mid+1,r);
    return two(left,right);
  }
}
int main(){
  int n;
  cin >> n;
  vector<string> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  cout << check(a,0,a.size()-1);
}