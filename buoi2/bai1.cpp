#include <bits/stdc++.h>
using namespace std;
bool checkpalin[103][103];
void check(string s)
{
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        checkpalin[i][i] = 1;
        for (int j = i + 1; j < n; j++)
        {
            checkpalin[i][j] = j - 1 == i ? (s[i] == s[j]) : (checkpalin[i + 1][j - 1]) && (s[i] == s[j]);
        }
    }
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin >> s;
    check(s);
    int x, y;
    cin >> x >> y;
    cout << checkpalin[x - 1][y - 1] << endl;
    return 0;
}