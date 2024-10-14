#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    stack<char> sst;

    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty())
        {
            int top = st.top();
            if (top == s[i])
            {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        else {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout << "0";
    }
    else {
        while (!st.empty())
        {
            sst.push(st.top());
            st.pop();
        }
        while (!sst.empty())
        {
            cout << sst.top();
            sst.pop();
        }
    }
    return 0;
}
