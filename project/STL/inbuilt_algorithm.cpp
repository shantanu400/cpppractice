#include <bits/stdc++.h>
using namespace std;
// all below used inbuils algorith function such as min_element, max_element, count, find etc are of O(N)  but in case of map and set find and count has O(log(N)) complexity as it is already sorted
int main(){
int n;
cin>>n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
   cin>>v[i];
   //or v.push_back(x)
}
int min1=*min_element(v.begin(),v.end());   // min_element give out adress so we use asteric mark so tha tit will give out value and store value in min variable
cout<<min1<<endl;
int min2=*min_element(v.begin()+3,v.end());  // it will see for min from 4th index to last

cout<<min2<<endl;
int max=*max_element(v.begin(),v.end());  // max_element give out adress so we use asteric mark so tha tit will give out value and store value in min variable
cout<<max<<endl;

int sum=accumulate(v.begin(),v.end(),0);   //it give value not address and we provided in bracket that from where we want sum and till where we want sum and then we assigned initial value of sum taht is 0 here
cout<<sum<<endl;

int ct=count(v.begin(),v.end(),2);   //it give value not address and we provided in bracket that from where we want count of any number and till where we want count of number and then we assigned the value whose count we want
cout<<ct<<endl;

//int ele=*find(v.begin(),v.end(),2);
 // find give out adress so we use asteric mark so that it will give out value and store value in ele variable)
// it will return the value if found otherwise it will return not found
//cout<<ele<<endl;
auto it=find(v.begin(),v.end(),6);  //if we have iteratoer to use then // it will return the value if found otherwise it will return not found
if(it!=v.end())
cout<<(*it)<<endl;
else
cout<<"element not found";

//reverse reverses the string vector and array
//and reverse the the same array  vector or string not making its copy so if we want then we have to make its copies
reverse(v.begin(),v.end());
//reverse(v.begin()+2,v.end());  //reverses from two index next
for(auto val:v){
    cout<<val<<" ";

}
cout<<endl;

string s = "asfdjasfdjfdkh";
reverse(s.begin()+1,s.end());
cout<<s<<endl;




    return 0;
}