#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = a[0];
    int cur = a[0];
    int st = 0;
    int end = 0;
    int cur_i = 0;
    for (int i = 1; i < n; i++)
    {
        if (cur < 0)
        {
            cur = a[i];
            cur_i = i;
        }
        else
            cur += a[i];
        if (cur > max)
        {
            max = cur;
            st = cur_i;
            end = i;
        }
    }
    cout << max << " " << st << " " << end << endl;
    return 0;
}