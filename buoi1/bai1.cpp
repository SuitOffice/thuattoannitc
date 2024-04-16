#include <bits/stdc++.h>
using namespace std;
bool a[1000001];
void snt(int n)
{
    for (int i = 2; i <= n; i++)
        a[i] = 1;
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if(a[i]==1)
        {
            for (int j = i * i; j <= n; j += i)
                a[j] = 0;
        }
    }
}
int greatest(int x, int y)
{
    snt(__gcd(x, y));
    for (int i = __gcd(x, y); i >= 2; i--)
    {
        if (a[i] && x % i == 0 && y % i == 0)
            return i;
    }
    return -1;
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int a, b;
    cin >> a >> b;
    cout << greatest(a, b) << endl;
    return 0;
}