#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;
vector<int> chu(vector<int>& A,int B,int& t)
{
    vector<int> C;
    for(int i=0;i<A.size();i++)
    {
        t=t*10+A[i];
        C.push_back(t/B);
        t%=B;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0)
    {
        C.pop_back();
    }
    return C;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string a;
    int b;
    int t=0;
    cin >> a;
    cin >> b;
    vector<int> A;
    for(int i=0;i<a.size();i++)
    {
        A.push_back(a[i]-'0');
    }
    auto C=chu(A,b,t);
    for(int i=C.size()-1;i>=0;i--)
    {
        cout << C[i];
    }
    cout << endl << t;
    return 0;
}
