//using this we can stiore multiple duplicate of one input
#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
   for ( string val: s){
    cout<<val<<endl;
   }    
   
}
int main(){
    multiset<string> s;
    s.insert("hare");  //log(n)   stores in unshorted shorted order
     
    s.insert("krishna");
    
    s.insert("jai shree shree radha vrindavanchandra");
       
     s.insert("hare"); 
   
    auto it=s.find("hare");    //log(1)
    if(it!=s.end()){
         //cout<<(*it)<<endl;
          // s.erase(it);  ///it will erase the value which is ityerated by iterator it


    }
   s.erase("hare");
    // we will find that erase which is in loop will only erase the first hare 
    //but erase which is outside the loop will erase the both hare
    print(s);
    return 0;
}