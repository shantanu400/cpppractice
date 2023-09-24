#include <bits/stdc++.h>
using namespace std;

int main(){
 unordered_map<int, string> m;   //inbuilt implementation means it does not make the key in ordered it store and give as it is inserted                 
  //time complexity reduced to O(LOG(1)) as in case of map it was O(log(n))
  
    m[1] = "hare";                //        
    m[3] = "jai shree shree radha gopal"; 
    m[2] = "krishna";
    for (auto &pr : m)
    {
        cout << pr.first << "  " << pr.second << endl;
    }

   // unordered_map<pair<int, string>> m; 
   //  it is just for basic 
    //data type  such int long long int etc it can't be used for multiple 
    //data type as unordered map work on HASHING  where map works on tree  if we will run this line code it will not complile
  
  //hashing function is not defined for multiple datatype such as pair<int,int>
    return 0;
}