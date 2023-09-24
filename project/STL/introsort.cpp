#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int a[n];
for (int i = 0; i <n; i++)
{
    cin>>a[i];
}
sort(a,a+n); // work first on recurssion sort then if depth become too 
// much then it shift on heap sort
// and if no of element is too ;ess then work on insertion sort
//in this we give address of element of arrey from where we want to sort and the address of element of arrey till where  we want to sort (sort(a,a+n))
// a is itself pointer hota hai so it is itself address and "a+0" means we want sorting from index 0 then
//"a+n" then we want sorting till (n-1)th index but we have to pass adresss of one step ahead of end element "i.e instead of"a+(n-1)" we have to pass "a+n"

for (int i = 0; i <n; i++)
{
    cout<<a[i]<<"  ";
}

//FOR VECTORS
int m;
cin>>m;
vector<int> v(m);

for (int i = 0; i <m; i++){
//    int x;
//     cin>>x;
//     v.push_back(x);
cin>>v[i];
}
sort(v.begin(),v.end());  // adress one ahead of last element is v.end() in case of vectors maps etc

for (int i = 0; i <m; i++){
    cout<<v[i]<<"  ";
}


    return 0;
}