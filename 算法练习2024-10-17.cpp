//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    while (n--) {
//        int sum = 0;
//        int a, b, c;
//        cin >> a >> b >> c;
//        int m = min(a, b);
//        m = min(m, c);
//        sum += 2 * m;
//        b -= m;
//        if (b) {
//            sum += (b - 1);
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int row[4] = { 1, -1, 0, 0 };
//int rel[4] = { 0, 0, 1, -1 };
//
//bool dfs(vector<vector<int>>& grid, int x, int y, int& sum) {
//    bool visit = false;
//    vector<pair<int, int>> rottenApples;
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            if (grid[i][j] == 2) {
//                for (int l = 0; l < 4; l++) {
//                    int x1 = i + row[l];
//                    int y1 = j + rel[l];
//                    if (x1 >= 0 && x1 < x && y1 >= 0 && y1 < y) {
//                        if (grid[x1][y1] == 1) {
//                            visit = true;
//                            rottenApples.emplace_back(x1, y1);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    for (auto& apple : rottenApples) {
//        grid[apple.first][apple.second] = 2;
//    }
//    if (visit) {
//        sum++;
//    }
//    return visit;
//}
//
//int rotApple(vector<vector<int>>& grid) {
//    int sum = 0;
//    int x = grid.size();
//    int y = grid[0].size();
//    while (dfs(grid, x, y, sum));
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            if (grid[i][j] == 1) {
//                return -1;
//            }
//        }
//    }
//    return sum;
//}
//
//int main() {
//    vector<vector<int>> grid = {
//        {2, 1, 1},
//        {1, 0, 1},
//        {1, 1, 1}
//    };
//
//    cout << rotApple(grid) << endl;
//    return 0;
//}
//int main() {
//    vector<vector<int>> grid;
//    vector<int> q1 = { 2, 1, 1 };
//    vector<int> q2 = { 1, 0, 1 };
//    vector<int> q3 = { 1, 1, 1 };
//    grid.push_back(q1);
//    grid.push_back(q2);
//    grid.push_back(q3);
//
//    cout << rotApple(grid) << endl;
//    return 0;
//}

// int LastRemaining_Solution(int n, int m) {
    //     int res=0;
    //     for(int i=2;i<=n;i++)
    //     {
    //         res=(res+m)%i;
    //     }
    //     return res;
    // }
    // int a[5001]={0};
    // int LastRemaining_Solution(int n, int m) {
    //     int cnt=0;
    //     int i=0,k=0;
    //     int p=0;
    //     while(cnt!=n)
    //     {
    //         i++;
    //         if(i>n){
    //             i=1;
    //         }
    //         if(a[i]==0){
    //             k++;
    //             if(k==m){
    //                 a[i]=1;
    //                 cnt++;
    //                 k=0;
    //                 if(cnt==n)
    //                 {
    //                     p=i-1;
    //                 }
    //             }
    //         }
    //     }
    //     return p;
    // }
#include<iostream>
using namespace std;

int a[5001] = { 0 };
int LastRemaining_Solution(int n, int m) {
    int cnt = 0;
    int i = 0, k = 0;
    int p = 0;
    while (cnt < n)
    {
        if (a[i] == 0)
        {
            k++;
            if (k == m)
            {
                a[i] = 1;
                k = 0;
                cnt++;
                if (cnt == n)
                {
                    p = i;
                }
            }
        }
        i = (i + 1) % n;
    }
    return p;
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << LastRemaining_Solution(n, m) << endl;
    return 0;
}
