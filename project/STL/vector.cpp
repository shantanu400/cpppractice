#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v.size();             //time complexity=O(1)

        cout << v[i];

    }
}

void printvec(vector<string> s)   ///int is changed to <string> b/c we will feed this function string
{
    for (int i = 0; i < s.size(); i++)
    {
        s.size();             //time complexity=O(1)

        cout << s[i];

    }
}
int main()
{
 vector<int> v1(5);   //initialisation  //i gave size of vector 5 but not given any value specifically the automaticall it will take 0 everywher when again we will push any no in it its size will increse and  that no will be added as 6th place no
 printvec(v1);
 cout<<endl;


 vector<int> v2(5);  
 v2.push_back(9);  /////pushed or added 9 in v vector then it is added at 6th place;
 printvec(v2);
 cout<<endl;




vector<int> v3(5,3);      //i gave size of vector 5 and given value specifically =3
 v3.push_back(9);  
 printvec(v3);
 cout<<endl;

 vector<int> v4(5,3);      //i gave size of vector 5 and given value specifically =3
 v4.push_back(9);  
 printvec(v4);
 v4.pop_back();   // delete value last entered from vector   /// time complexity =O(1)
 cout<<endl;
 printvec(v4);
 cout<<endl;

    vector<int> v; // initilisation
    int n;   //size of row  vector assigned that is row is made fixed it will become variable when we will be using vectors of vector
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        v.push_back(x);    //time complexity=O(1)  // value of x is put into vector v
    }

    printvec(v);

    vector<string> s; // initilisation for using for string
    int o;   //size of row  vector assigned that is row is made fixed it will become variable when we will be using vectors of vector
    cin >> o;
    for (int i = 0; i < o; i++)
    {
        string y;
        cin >> y;
        s.push_back(y);    //time complexity=O(1)  // value of x is put into vector v
    }

    printvec(s);

    return 0;
}