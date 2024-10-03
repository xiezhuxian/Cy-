#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> jian(vector<int>& A,vector<int>& B )
{
    vector<int> C;
    int t=0;
    for(int i=0;i<A.size();i++)
    {
        t=A[i]-t;
        if(i<B.size()) t-=B[i];
        C.push_back((t+10)%10);
        if(t<0){
            t=1;
        }
        else{
            t=0;
        }
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
    
    string a,b;
    cin >> a;
    cin >> b;
    vector<int> A;
    vector<int> B;
    for(int i=a.size()-1;i>=0;i--)
    {
        A.push_back(a[i]-'0');
    }
    for(int i=b.size()-1;i>=0;i--)
    {
        B.push_back(b[i]-'0');
    }
    if(a.size()<b.size())
    {
        cout << "-";
        auto z=jian(B,A);
        for(int i=z.size()-1;i>=0;i--)
        {
            cout << z[i];
        }
        return 0;
    }
     else if(a.size()==b.size())
     {
         int j=0;
         for(int i=A.size()-1;i>=0;i--)
         {
             if(A[i]!=B[i])
             {
                 j=1;
                 if(A[i]>B[i])
                 {
                     auto z=jian(A,B);
                     for(int i=z.size()-1;i>=0;i--)
                     {
                         cout << z[i];
                     }
                     return 0;
                 }
                 else{
                     cout << "-";
                     auto z=jian(B,A);
                     for(int i=z.size()-1;i>=0;i--)
                     {
                         cout << z[i];
                     }
                     return 0;
                 }
             }
         }
         if(!j)
         {
             cout << "0";
             return 0;
         }
     }
     else{
         auto z=jian(A,B);
         for(int i=z.size()-1;i>=0;i--)
         {
             cout << z[i];
         }
         return 0;
     }
}
