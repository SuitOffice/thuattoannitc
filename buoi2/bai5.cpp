#include <bits/stdc++.h>
using namespace std;
int a[101][101];
void count(int n, int m)
{
    int d = 0;
    string s = "";
    string k = "";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            k = "|" + to_string(a[i][j]) + to_string(a[i][j + 1]) + to_string(a[i + 1][j]) + to_string(a[i + 1][j + 1]) + "|";
            if (s.find(k) == string::npos)
            {
                d++;
                s += k;
            }
        }
    }
    cout << d << endl;
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    count(n, m);
}