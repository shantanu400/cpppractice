#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
   for ( string val: s){
    cout<<val;
   }    
   for (auto it =s.begin(); it!=s.end(); ++it){
    cout<<(*it)<<endl;  // need not to write .first or .second as it strores only one value
   }    
}
int main(){
    set<string> s;
    s.insert("hare");   //log(n)   stores in shorted order
    s.insert("krishna");
    s.insert("hare");  // it will not add one moe hare it will keep hare only one in no 
    s.insert("jai shree shree radha vrindavanchandra");
    auto it=s.find("hare");    //log(n)
    if(it!=s.end()){
         cout<<(*it)<<endl;
       //    s.erase(it);  ///it will erase the value which is iterated by iterator it


    }
    auto it=s.find("hare");    //log(n)
    if(it!=s.end()){
         cout<<(*it);
         }

    auto itr=s.find("harer nama");    //log(n)
    if(itr!=s.end()){
         cout<<(*itr);
         }  // it will not out harer nama as it is not in set



    return 0;
}