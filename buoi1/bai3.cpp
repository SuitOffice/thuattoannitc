#include <bits/stdc++.h>
using namespace std;
string res(int n){
    string ans="";
    for(int i=9;i>=2;i--){
        while(n%i==0){
            ans+=to_string(i);
            n/=i;
        }
    }
    reverse(ans.begin(), ans.end());
    return n>1?"-1":ans;
}

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w",stdout);
    long long a;
    cin>>a;
    cout<<res(a);
    return 0;
}