#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;                   
    m[1] = "hare";                        
    m[3] = "jai shree shree radha gopal"; 
    m[2] = "krishna";
    for (auto &pr : m)
    {
        cout << pr.first << "  " << pr.second << endl;
    }
auto it = m.find(3); // O (log(n))  //to find value corresponding to m[ ] at key 3 it used means iterating value and 3 means at 3 is it iterating
    
    if (it == m.end())
    { // yadi nahi hoga wo key i.e. 3 then it will return no val
        cout << "no val";
    }
    else
    {
        cout << (*it).first << "  " << (*it).second << endl;
    }
     m.erase(1); //O(log(n))  //clear m[1]
     cout<<"after erase"<<endl;
     for (auto &pr : m)
    {
        cout << pr.first << "  " << pr.second << endl;
    }
    if (it !=m.end())
    m.erase(it);
    for (auto &pr : m)
    {
        cout << pr.first << "  " << pr.second << endl;
    }

    //if we have used map<string,string> //(m.size( *(O(log(n)))) then for insertion time complexity depends upon type of key size of string too like 
    //while we are using string it not only compare the previous last entry did but also the size of string if string size is small then no matter but if the size of string is large the we have to consider the size too
    //for more reference go to " https://youtu.be/gUrfXZ0hqoA " at 16:45 minute
   
    
    return 0;
}