#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> m;
    string s;
    double n;
    int i, j = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> s;
        auto it = m.find(s);

        if (it != m.end())
        {
            cout << s << m[s]++ << endl;
        }
        else
        {
            m[s] = 1;

            cout << "OK" << endl;
        }
    }
    return 0;
}