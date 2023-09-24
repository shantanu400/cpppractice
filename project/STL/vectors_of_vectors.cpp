#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{ cout<<v.size();
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
}

int main(){

int N;
cin>>N;
vector<vector<int>> v;
for (int i=0;i<N;i++){
    int n;
    cin>>n;
    vector<int> temp;
    for(int j=0 ; j<n; j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
 v.push_back(temp);
    
}
v[0].push_back(10); //add 10 at last of vector temp in first time the loop j run
v.push_back(vector<int> ()); //add a empty vector at the end of vector v
for (int i=0;i<v.size();i++){
    printvec(v[i]);
}

    return 0;
}