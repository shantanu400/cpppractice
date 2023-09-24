#include <bits/stdc++.h>
using namespace std;

int main(){

map<set<int,int>,int> m;
pair<int,int> p1,p2;
//firstly p1.first will compare with p2 .first and if found p1.first greater the p1 will be store in map first as map store data after shorting


p1={2,3};
p2={3,4};
cout<<(p1<p2)<<"   ";   //if p1.first is more than p2.first then it will show false and will print zero otherwise true means 1;
cout<<(p1>p2)<<"   "<<endl;

p1={3,3}; // if p1.first will be equal to p2.first then comparison will be between p1.second and p2.second and same as above will happen taht is if p1.second is more than p2.second than p1>p2 it will print 1 other wise 0  
p2={3,4};
cout<<(p1<p2)<<"   ";
cout<<(p1>p2)<<"   "<<endl;

p1={5,3};
p2={3,4};
cout<<(p1<p2)<<"   ";
cout<<(p1>p2)<<"   "<<endl;

p1={5,6};
p2={3,4};
cout<<(p1<p2)<<"   ";
cout<<(p1>p2)<<"   "<<endl;
    return 0;
}