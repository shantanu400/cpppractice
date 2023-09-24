#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<char, char> m;
    int n, z, count = 0;
    cin >> n;
    char temp;
    z = 2 * n - 2;
    for (int i = 1; i <= z; i++)
    {
        char s;

        cin >> s;
        if (i % 2 != 0)
            temp = s;

        if (i % 2 == 0)
            //  m[s]=temp;  //also can be used to make map
            m.insert({s, temp});
    }

    for (const auto &value : m)
    {
      
        if (((value.second)-(value.first)) != 32)
        {
            count++;
        }
        else
        continue;
    }
    cout << count;
    return 0;
}