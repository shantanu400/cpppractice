#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<pair<string, string>, vector<int>> m;
    string fn, ln;
    int marks;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> fn >> ln >> marks;
        m[make_pair(fn, ln)].push_back(marks);
    }
    for (auto &value : m)
    {
        auto &first = value.first;
        auto &list=value.second;
        cout << first.first << "  " << first.second << "   ";
        for (auto &ele: list)
        {
            cout<< ele << endl;
        }
    }

    return 0;
}