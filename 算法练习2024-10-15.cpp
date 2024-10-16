// #include <iostream>
// using namespace std;
// typedef long long ll;
// const int N=1e7+10;
// int n,x;
// int a[N];
// ll sump[N];
// int ans=1e9;
// int l1,r1;
// bool check(int l,int r)
// {
//     return (sump[r]-sump[l-1])>=x ? true : false;
// }
// int main() {
//     cin >> n >> x;
//     for(int i=1;i<=n;i++)
//     {
//         cin >> a[i];
//         sump[i]=sump[i-1]+a[i];
//     }
//     for(int l=1,r=1;r<=n;r++)
//     {
//         int o=0;
//         while(l<=r&&check(l,r))
//         {
//             o=1;
//             l++;
//         }
//         if(o)
//         {
//             if((r-l+2)<ans)
//             {
//                 ans=r-l+2;
//                 l1=l-1;
//                 r1=r;
//             }
//         }
//     }
//     cout << l1 << " " << r1;
//     return 0;
// }

//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const int N = 1e7 + 10;
//int n, x;
//int a[N];
//ll sump[N];
//int ans = 1e9;
//int l1, r1;
//bool check(int l, int r)
//{
//    return (sump[r] - sump[l - 1]) >= x ? true : false;
//}
//int main()
//{
//    cin >> n >> x;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        sump[i] = sump[i - 1] + a[i];
//    }
//    for (int l = 1, r = 1; l <= n; l++)
//    {
//        while (r <= n && !check(l, r))
//        {
//            r++;
//        }
//        if (check(l, r))
//        {
//            if ((r - l + 1) < ans)
//            {
//                ans = r - l + 1;
//                l1 = l;
//                r1 = r;
//            }
//        }
//    }
//    cout << l1 << " " << r1;
//    return 0;
//}

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int n, k;
int a[N];
priority_queue<int> b;
ll sum = 0;
int main() {
    cin >> n >> k;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
        else {
            b.push(a[i]);
        }
    }
    while (!b.empty() && k != 0)
    {
        auto t = b.top();
        b.pop();
        while (b.top() <= t && k)
        {
            t = t / 2;
            --k;
        }
        if (t % 2 == 0)
        {
            b.push(t);
        }
        else {
            sum += t;
        }
    }
    while (!b.empty())
    {
        sum += b.top();
        b.pop();
    }
    cout << sum;
    return 0;
}
// 64 位输出请用 printf("%lld")
