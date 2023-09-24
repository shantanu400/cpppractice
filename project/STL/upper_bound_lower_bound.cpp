#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
   
    cin>>a[i];

}
sort(a,a+n);
for (int i = 0; i < n; i++)
{
   
    cout<<a[i]<<"  ";}
    cout<<endl;
    int *ptr1=lower_bound(a,a+n,8);  //if the whose lower bound is to find is presenrt then it will print that value if not present then it wil print a value at next address.
    int *ptr2=lower_bound(a+3,a+n,8);  // it will return 13 as we stated lower bound from 13 [since a+3] to n that is last
                                      // if no will not be present and next to that no is also no present then it will point to next adress which have some arbitrary value so it will return some arbitrary value
                                        //example below
    int *ptr3=lower_bound(a,a+n,63);
    cout<<(*ptr1)<<"  "<<(*ptr2)<<"  "<<(*ptr3)<<endl;
    // upper bound :give value at one adrres ahead of the that no or graeter than the no if no. is not present 
    int *ptr5=upper_bound(a,a+n,5);
    cout<<(*ptr5)<<endl;
    int *ptr4=lower_bound(a,a+n,63);
    if (ptr4==(a+n)){
        cout<<"NOT FOUND";
   

  ///////////////////////////////////////////////////
 // FOR VECTORS  
    vector<int> v(n);
    for (int i = 0; i < n; i++)
{
   
    cin>>v[i];

}
sort(v.begin(),v.end());
for (int i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

auto it=lower_bound(v.begin(),v.end(),5);
if (it==v.end()){
        cout<<"NOT FOUND";
        return 0;
    }
    cout<<(*it)<<endl;


/////////////////////////////////////////////////////////
//SET

set<int> s;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
   s.insert(x);

}
for (int i = 0; i < n; i++)
{ int x;
cin>>x;
    // auto itt=lower_bound(s.begin(),s.end(),5);  // but this way we will get O(N) complexity so
auto itt=s.lower_bound(x);
}


cout<<(*it)<<endl;



//////////////////////////////////////////////////////
//FOR MAP

//auto ittt=m.lowewr_bound(x);   
// in case of map upper and lower bound act only on key
////////////////
//also applicable in pair,string
//ina case of arry it work on binary search and in case of sets and map it uses tree

    return 0;
}