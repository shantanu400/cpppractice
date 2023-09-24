#include <iostream>
using namespace std;
int main()
{
    // int n,m;
    // cin>>n>>m;5
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=m; j++)
    //     {
    //         if (i==1||i==n)
    //      cout<<'*';
    //      else if (j==1 || j==m)
    //      cout<<"*";
    //      else 
    //      cout<<" ";

    //     }
    //     cout<<endl;
    // }

//     int n;
//     cin>>n;
//     for(int i=n; i>=1; i--)
//     {
//         for(int j=1; j<=i; j++)
//         cout<<"*";
        
//    cout<<endl;
//     }
    
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
   
//     for(int j=1; j<=n; j++){
//         if(j<=n-i){
//         cout<<" ";
//         }
//       else{
//         cout<<"*";
//        }
//     }
//    cout<<endl;
//     }
   
//    int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
   
//     for(int j=1; j<=i; j++ )
//     {
        
//         cout<<i;
//     }
//    cout<<endl;
//     }
   
//    int n,z;
//    z=1;
//     cin>>n;
//     for(int i=1; i<=n; i++){
   
//     for(int j=1; j<=i; j++ )
//     {
        
//         cout<<z<<" ";
//         z++;
//     }
//    cout<<endl;
//     }
   
   
    int n,z;
   
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++ ){
            cout<<"*";}
int space=2*n-2*i;
        for(int j=1; j<=space;j++){ 
        cout<<" ";}
        for(int j=1; j<=i; j++){
            cout<<"*";}
cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++ ){
            cout<<"*";}
int space=2*n-2*i;
        for(int j=1; j<=space;j++){ 
        cout<<" ";}
        for(int j=1; j<=i; j++){
            cout<<"*";}
cout<<endl;
    }
     
   return 0;
}