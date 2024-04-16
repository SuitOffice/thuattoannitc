#include <bits/stdc++.h>
using namespace std;
#define mod 22082018
bool c[1000001];
void snt(long long n)
{
    for (int i = 2; i <= n; i++)
        c[i] = 1;
    c[0] = 0;
    c[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (c[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                c[j] = 0;
        }
    }
}
long long sum(int n)
{
    snt(n);
    long long sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (c[i])
        {
            i % mod;
            sum += i;
            sum %= mod;
        }
    }
    return sum;
}
int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w",stdout);
    long long n;
    cin >> n;
    cout << sum(n);
    return 0;
}