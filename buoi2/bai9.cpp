#include <bits/stdc++.h>
using namespace std;
void hoanvidep(int n)
{
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    else if (n == 4)
        cout << "3 1 4 2";
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                cout << i << " ";
        }
        for (int i = 1; i <= n; i++)
        {
            if (!(i & 1))
                cout << i << " ";
        }
    }
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    cin >> n;
    hoanvidep(n);
    return 0;
}