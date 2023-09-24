 #include <bits/stdc++.h>
 using namespace std;

void print(int i,int N)
{
 if (i<=0) 
 return;
 print(i-1,N);
 cout<<i;
 return;
 
}
 int main(){
int N;

cin>>N;

print(N,N);

    return 0;

 }