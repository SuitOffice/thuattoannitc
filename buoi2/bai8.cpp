#include <bits/stdc++.h>
using namespace std;
int findx(vector<int> a, int x)
{
    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n, x;
    cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    if (findx(a, x) == -1)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    return 0;
}