#include <bits/stdc++.h>
using namespace std;
void xau(string s)
{
    int d = 0;
    string p = " ";
    for (int i = 0; i < s.size(); i++)
    {
        string h = "";
        for (int j = i; j < s.size(); j++)
        {
            h += s[j];
            string k = " " + h + " ";
            if (p.find(k) == string::npos)
            {
                d++;
                p = p + h + " ";
            }
        }
    }
    cout << d;
}
int main()
{
    // freopem("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    string s;
    cin >> s;
    xau(s);
    return 0;
}