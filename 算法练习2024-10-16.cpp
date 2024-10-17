#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param board string字符串vector
     * @param word string字符串
     * @return bool布尔型
     */
    char str[200][200];
    bool cmp[200][200] = { false };
    int row[4] = { 1, -1, 0, 0 };
    int rel[4] = { 0, 0, 1, -1 };
    bool dfs(vector<string>& board, int maxx, int maxy, int l, int r, string& s, int p) {
        if (p != (s.size() - 1)) {
            int u = 0;
            for (int i = 0; i < 4; i++) {
                int x = l + row[i];
                int y = r + rel[i];
                if (x < maxx && x >= 0 && y >= 0 && y < maxy) {
                    if (board[x][y] == s[p] && cmp[x][y] == false) {
                        cmp[x][y] = true;
                        bool bp = dfs(board, maxx, maxy, x, y, s, p + 1);
                        if (bp) {
                            return true;
                        }
                        cmp[x][y] = false;
                    }
                }
            }
            return false;
        }
        else {
            for (int i = 0; i < 4; i++) {
                int x = l + row[i];
                int y = r + rel[i];
                if (x < maxx && x >= 0 && y >= 0 && y < maxy) {
                    if (board[x][y] == s[p] && cmp[x][y] == false) {
                        return true;
                    }
                }
            }
            return false;
        }
    }
    bool exist(vector<string>& board, string word) {
        // write code here
        int i = board.size();
        int j = board[0].size();
        if (word.size() == 1) {
            for (int i1 = 0; i1 < i; i1++) {
                for (int j1 = 0; j1 < j; j1++) {
                    if (board[i1][j1] == word[0]) {
                        return true;
                    }
                }
            }
            return false;
        }
        for (int i1 = 0; i1 < i; i1++) {
            for (int j1 = 0; j1 < j; j1++) {
                if (board[i1][j1] == word[0]) {
                    cmp[i1][j1] = true;
                    if (dfs(board, i, j, i1, j1, word, 1)) {
                        return true;
                    }
                    cmp[i1][j1] = false;
                }
            }
        }
        return false;
    }
};
int main()
{
    return 0;
}

// class Solution {
//   public:
//     bool exist(vector<string>& board, string word) {
//         int rows = board.size(), cols = board[0].size();
//         bool cmp[200][200] = {false};
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 if (board[i][j] == word[0] && dfs(board, word, i, j, 0, rows, cols, cmp)) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

//     bool dfs(vector<string>& board, string& word, int x, int y, int index, int rows,
//              int cols, bool cmp[200][200]) {
//         if (index == word.size()) {
//             return true;
//         }
//         if (x < 0 || x >= rows || y < 0 || y >= cols || board[x][y] != word[index] ||
//                 cmp[x][y]) {
//             return false;
//         }
//         cmp[x][y] = true;
//         int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
//         for (int i = 0; i < 4; i++) {
//             if (dfs(board, word, x + dirs[i][0], y + dirs[i][1], index + 1, rows, cols,
//                     cmp)) {
//                 return true;
//             }
//         }
//         cmp[x][y] = false;
//         return false;
//     }
// };

//#include <iostream>
//using namespace std;
//const int N = 1e3;
//int a[N][N] = { 0 };
//int main() {
//    int n;
//    cin >> n;
//    a[0][0] = 1;
//    for (int i = 1; i < n; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            if ((i - 1) >= 0)
//            {
//                a[i][j] += a[i - 1][j];
//            }
//            if ((i - 1) >= 0 && (j - 1) >= 0)
//            {
//                a[i][j] += a[i - 1][j - 1];
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (a[i][j])
//            {
//                if (j != i)
//                {
//                    printf("%5d", a[i][j]);
//                }
//                else {
//                    printf("%5d\n", a[i][j]);
//                }
//            }
//        }
//    }
//    return 0;
//}
// 64 位输出请用 printf("%lld")

//#include <iostream>
//#include <cmath>
//using namespace std;
//typedef long long ll;
//ll f(int n)
//{
//    if (n == 0)
//    {
//        return 0;
//    }
//    else if (n == 1)
//    {
//        return 1;
//    }
//    else {
//        return f(n - 2) + f(n - 1);
//    }
//}
//ll ans;
//int main() {
//    int n;
//    cin >> n;
//    int j = 1;
//    ans = n - f(0);
//    while (1)
//    {
//        ll res = abs(n - f(j));
//        if (ans < res)
//        {
//            break;
//        }
//        else {
//            ++j;
//            ans = res;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}
// 64 位输出请用 printf("%lld")
