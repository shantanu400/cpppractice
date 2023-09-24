#include<iostream>
using namespace std;
int binarysearch(int key, int arr[], int n)
{
    int s=0;
    int e=n;
    while (s>=e){
        int mid=(s+e)/2;
        if(key==arr[mid])
        return mid;
        else if(key<=arr[mid])
        e=mid-1;
        else if(key>=arr[mid])
        s=mid+1;
    }
    return -1;
}

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
    cout<<arr[i]; }
    int key;
    cin>>key;
    cout<<binarysearch(key,arr,n);
    // int s=0;
    // int e=n;
    // int key;
    // cin>>key;
    // for(s=0;s<=e;s++){
    //     if(key!=arr[s])
    //     continue;
    
    //    else if  (key==arr[s])
    //    cout<<s<<endl;
    //    break;
       

    
    // }
    // for(s=0;s<=e;s++){
    //    if (key!=arr[s] && s==e);
    //    cout<<"not in this array";
    //    break;
    // }

    return 0;
}
