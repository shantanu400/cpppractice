#include <bits/stdc++.h>
using namespace std;

int main(){



vector<pair<int,int>> v2={{1,2},{2,3},{3,4}};
   cout<<v2[2].second<<endl;
   v2.push_back({6,7});
   for (int i = 0; i < v2.size(); i++)
   {
    cout<<v2[i].first<<"  "<<v2[i].second<<endl;
   }

   vector<pair<int,int>> :: iterator it;
   for (it=v2.begin(); it !=v2.end(); ++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<(it->first)<<" "<<(it->second)<<endl;
   }

////  vector<pair<int,int>> :: iterator it; it need not to be written if we use auto keyword for c++11 
   for (auto it=v2.begin(); it !=v2.end(); ++it){//auto is used before it so it will automatically detect that it is iterator  iterating the v2 vector 
    cout<<(*it).first<<" used auto "<<(*it).second<<endl; 
    cout<<(it->first)<<" used auto "<<(it->second)<<endl;
   }

   cout<<"hare krishna"<<endl;
    vector<pair<int,int>> :: iterator It=v2.begin(); //if we have use iterator 'It' for vector<pair<int,int>> earlier at one place then we can't 
                                                     //use it for another type  vector like  vector<int> also we can't use for same vector v2
                                                    // if i already assigned it to this tne we can't assign another iterator to this  
    for (it=v2.begin(); it !=v2.end(); ++it){

    cout<<(it->first)<<" "<<(it->second)<<endl;
   }
   for(pair<int,int> &value: v2){               //way to print loop in very small line of code  here this is to print pair similarly for others we need not to write this much "it=v2.begin(); it !=v2.end(); ++it"
    cout<<value.first<<" short loop to print "<<value.second<<endl;
   }


    

   return 0;
}
   

    