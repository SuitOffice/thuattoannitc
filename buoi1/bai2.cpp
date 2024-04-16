#include<bits/stdc++.h>
using namespace std;
int lastdigitzero(int  n)
{
    long long res=1;
    for(int i=2;i<=n;i++){
        res*=i;
        while(res%10==0)res/=10;
        res%=10;
    }
    return res;

}
int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w",stdout);
    int n;
    cin>>n;
    cout<<lastdigitzero(n)<<endl;
    return 0;
}