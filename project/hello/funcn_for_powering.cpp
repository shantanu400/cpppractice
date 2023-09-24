#include<iostream>
using namespace std;

int powering(int a, int t){
for(int k=1;k<=t;k++){
a*=a;
}
return a;
}
 int a,t;

int main ()
{
    int b,p,n;
    a=p=t=0;
    cin>>n;
   int i=n;
 
  while(b>0){
  a=n%10;
   n=n/10;
   t+=1;
  }
   cout<<"val of t "<<t<<endl;
   while(i>0){
    a=i%10;
    p=powering(a,t);
    p+=p;
    i=i/10;
    cout<<i<<endl;
    }
    cout<<p<<"this is p"<<endl;
  
    if (p==n){
    cout<<"armstrong "; }
    else {
    cout<<"not armstrong"; } 

return 0;

}