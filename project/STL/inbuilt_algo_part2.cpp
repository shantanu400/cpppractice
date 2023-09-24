#include <bits/stdc++.h>
using namespace std;

int main(){
// lambda function
[](int x){return x+2;} ; //simple lambda function

cout<<[](int x){return x+2;}(5)<<endl;  //calling of lambda function
  // we can also create lambda function in one line and get out put in same line;

  cout<<[](int y){return y+2;}(7)<<endl;
  cout<<[](int x,int y){return x+y;}(5,7)<<endl;

//if we want to reuse the function;   
auto sum=[](int x,int y){return x+y;};
cout<<sum(2,3);
    return 0;
}