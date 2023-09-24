//we use unordered set when we just need to know only the presence of any item and not need that tobe in shorted order then because time complexity of set is log (n)  while of unorderd set is log(1)
//we can't use key as copmlex data type  as hash function is not defined  for this type
// everything is same as unordered map
#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
   for ( string val: s){
    cout<<val;
   }    
   for (auto it =s.begin(); it!=s.end(); ++it){
    cout<<(*it)<<endl;  // need not to write .first or .second as it strores only one value
   }    
}
int main(){
    unordered_set<string> s;
    s.insert("hare");   //log(1)   stores in unshorted shorted order
    s.insert("krishna");
    s.insert("jai shree shree radha vrindavanchandra");
    auto it=s.find("hare");    //log(1)
    if(it!=s.end()){
         cout<<(*it);
       //    s.erase(it);  ///it will erase the value which is ityerated by iterator it


    }
    auto it=s.find("hare");    //log(1)
    if(it!=s.end()){
         cout<<(*it);
         }// it will not add one moe hare it will keep hare only one in no 

    auto it=s.find("harer nama");    //log(1)
    if(it!=s.end()){
         cout<<(*it);
         }  // it will not out harer nama as it is not in set



    return 0;
}