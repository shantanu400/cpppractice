#include <bits/stdc++.h>
using namespace std;

int main(){
queue<string> q;
q.push("Radhe");
q.push("Radhe...");
q.push("Radhe.....");
q.push("Radhe.......");
while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}
    return 0;
}