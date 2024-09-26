#include<iostream>
#include<cstring>
using namespace std;
const int N=1e6;
int n,m;
int q[N];
int find(int a)
{
    if(q[a]!=a)
    {
        q[a]=find(q[a]);
    }
    return q[a];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        q[i]=i;
    }
    while(m--)
    {
        string s;
        int x,y;
        cin >> s;
        cin >> x >> y;
        if(s=="M")
        {
            q[find(x)]=find(y);
        }
        else
        {
            if(find(x)==find(y))
            {
                cout << "Yes" <<"\n";
            }
            else
            {
                cout << "No" <<"\n";
            }
        }
    }
    return 0;
}
