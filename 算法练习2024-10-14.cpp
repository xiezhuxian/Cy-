// #include <iostream>
// using namespace std;
// const int N = 1e5 + 10;
// typedef long long ll;

// int n;
// int cost[N];
// ll dp[N];

// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> cost[i];
//     }
//     dp[0]=cost[0];
//     dp[1]=cost[1];
//     for(int i=2;i<n;i++)
//     {
//         dp[i]=min(dp[i-1],dp[i-2])+cost[i];
//     }
//     cout << min(dp[n-1],dp[n-2]) << endl;
//     return 0;
// }
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 1e5 + 10;
//typedef long long ll;
//
//int n;
//int cost[N];
//ll result[N];
//ll dfs(int m)
//{
//    if (m >= n)
//    {
//        return 0;
//    }
//    if (result[m] != -1)
//    {
//        return result[m];
//    }
//    return result[m] = min(dfs(m + 1), dfs(m + 2)) + cost[m];
//}
//int main()
//{
//    cin >> n;
//    memset(result, -1, sizeof(result));
//    for (int i = 0; i < n; i++)
//    {
//        cin >> cost[i];
//    }
//    dfs(0);
//    cout << min(result[0], result[1]);
//    return 0;
//}

// #include <iostream>
// #include <cstring>
// #include <vector>
// using namespace std;
// const int N=1e5+10;
// int n;
// string a,b;
// int x[N];
// int y[N];
// int main() {
//     cin >> n;
//     cin >> a >> b;
//     int j=0;
//     int p=0;
//     int t1=0;
//     int t2=0;
//     for(int i=0;i<n;i++)
//     {
//         string s;
//         cin >> s;
//         if(s==a)
//         {
//             x[j++]=i;
//             t1=1;
//         }
//         if(s==b)
//         {
//             y[p++]=i;
//             t2=1;
//         }
//     }
//     if(t1==0||t2==0)
//     {
//         cout << "-1" << endl;
//         return 0;
//     }
//     int sum=1e9;
//     for(int i=0;i<j;i++)
//     {
//         for(int u=0;u<p;u++)
//         {
//             sum=min(sum,abs(x[i]-y[u]));
//         }
//     }
//     cout << sum;
//     return 0;
// }

#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int minDistance(int n, const string& str1, const string& str2,
   const vector<string>& strs) {
   int index1 = -1, index2 = -1;
   int minDist = INT_MAX;

   for (int i = 0; i < n; ++i) {
       if (strs[i] == str1) {
           index1 = i;
       }
       else if (strs[i] == str2) {
           index2 = i;
       }

       if (index1 != -1 && index2 != -1) {
           minDist = min(minDist, abs(index1 - index2));
       }
   }

   return (minDist == INT_MAX || index1 == -1 || index2 == -1) ? -1 : minDist;
}

int main() {
   int n;
   cin >> n;

   string str1, str2;
   cin >> str1 >> str2;

   vector<string> strs(n);
   for (int i = 0; i < n; ++i) {
       cin >> strs[i];
   }

   int result = minDistance(n, str1, str2, strs);
   cout << result << endl;

   return 0;
}
