#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

vector<int> cheng(vector<int>& A,int B)
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t+=A[i]*B;
        C.push_back(t%10);
        t=t/10;
    }
    while(t)
    {
        C.push_back(t%10);
        t=t/10;
    }
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
    cin >> a;
    cin >> b;
    vector<int> A;
    for(int i=a.size()-1;i>=0;i--)
    {
        A.push_back(a[i]-'0');
    }
    auto C=cheng(A,b);
    for(int i=C.size()-1;i>=0;i--)
    {
        cout << C[i];
    }
    return 0;
}
