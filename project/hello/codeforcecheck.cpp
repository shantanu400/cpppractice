/*#include <bits/stdc++.h> // all library is present in this i.e. UNIVERSAL

using namespace std;

int main() {
    int a;
    long long int b;
    char c;
    float d;
    double e;
    
   cin>>a>>b>>c>>d>>e;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
   cout<<fixed<<setprecision(3)<<d<<endl; // fixed<<setprecision(3)<< to print value after decimal till 3 digit
   cout<<fixed<<setprecision(9)<<e<<endl; // fixed<<setprecision(3)<< to print value after decimal till 9 digit
   
    return 0;
}*/

/*#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n;
    cin>>n;
    if (1<n<9)
{switch (n) {
case 1:
cout<<"one";
break;
case 2:
cout<<"two";
break;
case 3:
cout<<"three";
break;
case 4:
cout<<"four";
case 5:
cout<<"five";
break;
case 6:
cout<<"six";
break;
case 7:
cout<<"seven";
break;
case 8:
cout<<"eight";
break;
case 9:
cout<<"nine";
break;
// default:
// cout<<"Greater than 9";
}

}
else {
cout<<"Greater than 9";
}
    return 0;
}*/
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
    int A=*a + *b;
    int B=abs(*a- *b);  
    cout<<A<<endl;
    cout<<B;  
}

int main() {
    int a, b;
    cin>>a;
   cout<<endl;
   cin>>b;
    int *pa = &a, *pb = &b;
    
    
    update(*pa, *pb);


    return 0;
}