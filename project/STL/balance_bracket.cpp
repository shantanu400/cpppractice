#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> m = {{'[', -3}, {'{', -2}, {'(', -1}, {']', 3}, {'}', 2}, {')', 1}};
string isbal(string s)
{
    stack<char> st;
    for (char &obj : s)
    {
        if (m[obj] < 0)
        {
            st.push(obj);
        }
        else
        {
            if (st.empty()) 
                return "NO";
            char top = st.top();
            st.pop();
            if (m[top] + m[obj] != 0)
            {
                return "NO";
            }
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << isbal(s)<<endl;
    }

    return 0;
}