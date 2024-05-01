#include <bits/stdc++.h>
using namespace std;
int find(vector<int> a, int i, int j)
{
    int count = 2;
    int k = a[j] - a[i];
    for (int x = j + 1; x < a.size(); x++)
    {
        if (a[x] - a[i] == count * k)
        {
            count++;
        }
    }
    return count;
}
int longest(vector<int> a)
{
    int max = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (max < find(a, i, j))
            {
                max = find(a, i, j);
            }
        }
    }
    return max;
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << longest(a);
    return 0;
}