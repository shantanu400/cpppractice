#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> nmn; // for erasing all
    nmn[1] = "a";
    nmn[3] = "c";
    nmn[2] = "b";
    nmn.clear();
    for (auto &pr : nmn)
    {
        cout << pr.first << " erase all" << pr.second << endl;
    }
    cout << "all clear had worked" << endl;

    map<int, string> m;                   // initialisation
    m[1] = "hare";                        // value declaration
    m[3] = "jai shree shree radha gopal"; // time complexity of using say m[6] only or
                                          // m[6]="something" is Olog(n) so if we not give even value
                                          // to m[6] then it will take string according to disctionary pattern that
                                          // what string which will come after string of m[5] it will take that automatically
    m[2] = "krishna";
    m.insert({4, "govinda"}); // value declaration taht is pushed using pair concept
    // or we can use
    m.insert(make_pair(2, "narayana")); // another way to insert
    map<int, string>::iterator it;      // itteratiing to use  for for loop
    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << (*it).first << "  " << (*it).second << endl;
    }

    for (auto &pr : m)
    {
        cout << pr.first << " <<shortcut of for loop for itterator>> " << pr.second << endl;
    }
    cout << endl;
    map<int, string> n;
    n[1] = "a";
    n[3] = "c";
    n[2] = "b";
    // even we have inserted key that is [1] [3] [2] in unsorted but when it will print it will give in sorted order this is propert of map

    n[2] = "z"; // we have assigned value to n[2] earlier but now againg assigning it will change the value of n[2];

    for (auto &pr : n)
    { /// time complexity =O(log n)  time complexity to put value and access value is O(log n)
        cout << pr.first << " for value replaced of n[2] and sorted order " << pr.second << endl;
    }

    

    return 0;
}