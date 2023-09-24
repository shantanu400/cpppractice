// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin>>n;
// // int a[n];
// // for(int i=0;i<n;i++){
// //     cin>>a[i];
    
// // }
// // sort(a,a+n);
// // for(int i=0;i<n;i++){
// //     cout<<a[i];
    
// // }

// // 	return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// bool retque(queue<int> &q1 , queue<int> &q2){
//     while(!=q2.empty()){
// 	    if (q1==q2)
// 	    return true;
// 	    else
// 	    return false;
// 	    string temp;
// 	    temp=q2.front();
// 	   q2.pop();
// 	   q2.push(temp);
// 	}
// }
// int main() {
// 	queue<string> q1,q2;
// 	q1.push("radhe");
// 	q1.push("krishna");
// 	q1.push("gopal");
// 	q1.push("madhav");
	
// 	q2.push("gopal");
// 	q2.push("madhav");
// 	q2.push("radhe");
// 	q2.push("krinna");
	
// 	 bool a= retque(q1,q2);
	
// 	return;
// }
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
      for(int i=0;i<n;i++){
          if (arr[i]>=k)
          arr[i]=arr[i]-k;
          else
          arr[i]=arr[i]+k;
      }
      int min=*min_element(arr,arr+n);
       int max=*max_element(arr,arr+n);
       return (max-min);