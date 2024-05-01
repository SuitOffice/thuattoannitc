
#include<bits/stdc++.h>
using namespace std;
int a[10001], n, stop = 0;
void khoitao(){
    for(int i = 1; i <= n; i++) a[i] = i;
}
void xuat(){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}
void sinh(){
  int i = n - 1;
  // tim a[i] ko tang dan a[i] < a[i+1]
  while(i>=1&&a[i] > a[i+1]) i--;
  if(i==0) stop = 1;
  else{
    //tim phan tu nho nhat lon hon a[i]
    int k = n;
    while(a[i]>a[k]) k--;
    swap(a[i],a[k]);
    //sap xep lai cac han tu dang sau theo thu tu tang dan
    int c = n, l = i + 1;
    while(l<c) {
      swap(a[l], a[c]);
      l++;
      c--;
    }
    // hoac dung reverse(a+i+1,a+n+1)
  }
}
void chuongtrinh(){
  while(stop == 0){
    xuat();
    sinh();
  }
}
int main(){
  cin >> n;
  khoitao();
  chuongtrinh();
}