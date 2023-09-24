#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={1,2,3,4,5};
    for (int i = 0; i < v1.size(); i++){
    cout<<v1[i]<<" ";}
   cout<<endl;
   vector<int> ::iterator it=v1.begin(); //=v1.begin() usedhere it actually pointing first element;
   for (it=v1.begin(); it !=v1.end(); ++it){
    cout<<(*it)<<"  ";
    cout<<(*it+1)<<endl; //giving ot iterating out next location value i.e. second  if uses it++ the 
                       //it give next iterator but it can't be used in case of map because in map in next iterator is unknown for us.
}
for (int &value: v1){
    cout<<value<<" ";} // another way applicabe to above c++11 to print value of variable in shortcut

   
    return 0;
}