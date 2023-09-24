#include<iostream>
using namespace std;
int main(){

     int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0; i<=n; i++){
    cin>>arr[i];
    cout<<endl;
    }
    for(int i=0; i<=n; i++){
    cout<<arr[i]<<"  "; }
    int count=0;
    
    for (int count= 0;count<=n; count++)
    {
        for(int j=count+1;j<=n;j++){
            if(arr[count]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[count];
            arr[count]=temp;}
        }
    }
    cout<<endl<<" THIS IS FINAL  ";
    for(int i=0; i<=n; i++){
    cout<<arr[i]; }
    return 0;
    
}