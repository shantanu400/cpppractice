// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int a,b,c,n;
//     a=b=0;
//     cin>>n;
//    int i=n;

//     // for (int i=1;i<=n;i++){
//     while(i>0){
//     a=i%10;
//     cout<<a<<endl;
//     b=b+pow(a,t);
//     cout<<b<<endl; 
//     i=i/10;
//     cout<<i<<endl;
    
//     }
//     cout<<b<<endl;
  
//     if (b==n){
//     cout<<"armstrong "; }
//     else {
//     cout<<"not armstrong"; } 
// // }
// return 0;
// }
#include<iostream>
using namespace std;

int arm(int a, int t){
    cout<<'d'<<t<<endl;
    int x=a;
for(int k=2; k<=t; k++){
    a*=x;
cout<<"dd"<<endl;
cout<<"this is a "<<a<<endl;
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


    while(i>0){
    a=i%10;
    
    i=i/10;
   
    t+=1;
    }

i=n;
int sum=0;
   while(i>0){
    a=i%10;
    cout<<a<<endl;
    p=arm(a,t);
    sum=sum+p;
    cout<<"val of sum "<<sum<<endl;
    i=i/10;
    }

    cout<<"val of t "<<t<<endl;
  
    if (sum==n){
    cout<<"armstrong "; }
    else {
    cout<<"not armstrong"; } 

return 0;
}