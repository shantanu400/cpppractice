#include <bits/stdc++.h>
using namespace std;

int main()
{

    pair<int, string> p;                        // initillisation
    p = make_pair(5, "hare krishna");           // declaration
    cout << p.first << " " << p.second << endl; // out

    pair<int, string> p1;             // initillisation
    p1 = {6, "jai shree radha rani"}; // another way to declare
    cout << p1.first << " " << p1.second << endl;

    pair<int, string> p2 = p; // initialisation and assigning value of p to p2 but it gives copy of p to p2 not the p itself
                              // means if we chane the p2 then value p willnot change
    p2 = {6, "jai shree radha rani"};
    cout << p2.first << " " << p2.second << endl;
    cout << p.first << " " << p.second << endl;

    pair<int, string> &p3 = p; // initialisation
    // value of p now will change b/c  we use concept of reference[&] here so now p1 got the acces to location or address o p
    // so it can chane directly  to p not the copy created of p in this case

    cout << p3.first << " " << p3.second << endl;
    p3 = {6, "jai shree radha rani"};
    cout << p.first << " " << p.second<<endl;

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair<int, int> p_a[3];
    p_a[0] = {1, 4};
    p_a[1] = {2, 5};
    p_a[2] = {3, 6};

    for (int i = 0; i < 3; i++)
        cout << p_a[i].first << "  " << p_a[i].second << endl;

    return 0;
}