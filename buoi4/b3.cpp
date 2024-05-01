#include <bits/stdc++.h>
using namespace std;
void Try(int n){
   if(n==0){return;}
   cout<<"n= "<<n<<endl;
   Try(n-1);
   cout<<"Quay lai o n= "<<n<<endl;
}
int main(){
   int n;
   cin>>n;
   Try(n);
}
