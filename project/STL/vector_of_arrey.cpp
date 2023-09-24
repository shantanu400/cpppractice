#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> v[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x); /// one arrey is made and pused in v vector then as one time loop end once then
                                // again go to next row then we again make array and push it form N no of row in it
        }
    }
    for (int i = 0; i < N; i++)
    {
        printvec(v[i]);
    }
    return 0;
}