#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int>> v)
{  

    for (int i = 0; i < v.size(); i++)
    {
         cout<<v.size()<<endl;// time complexity v.size =O(1);

        cout<<v[i].first;
    }
}

int main()
{

    vector<pair<int, int>> v1 = {{1, 2}, {3, 4}, {4, 5}};
    cout<<v1[2].first<<endl;

    vector<pair<int, int>> v2;
    int x,y;
    cin >> x >> y;
    v2.push_back({x, y});
    cout<<v2[0].first<<endl;


    vector<pair<int, int>> v;
    v.push_back({1, 2});
    v.push_back({2,3});
   
     printvec(v);

    return 0;
}