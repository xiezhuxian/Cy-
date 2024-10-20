#include<iostream>
#include <cmath>
#include <vector>
//#include <cstdio>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * 计算两个数之和
//     * @param s string字符串 表示第一个整数
//     * @param t string字符串 表示第二个整数
//     * @return string字符串
//     */
//    string solve(string s, string t) {
//        vector<int> q1;
//        vector<int> q2;
//        for (int i = s.size() - 1; i >= 0; i--)
//        {
//            q1.push_back(s[i] - '0');
//        }
//        for (int i = t.size() - 1; i >= 0; i--)
//        {
//            q2.push_back(t[i] - '0');
//        }
//        vector<int> C = jia(q1, q2);
//        string result;
//        for (int i = C.size() - 1; i >= 0; i--)
//        {
//            result += to_string(C[i]);
//        }
//        return result;
//    }
//    vector<int> jia(vector<int>& s, vector<int>& t)
//    {
//        if (s.size() < t.size())
//        {
//            return jia(t, s);
//        }
//        vector<int> C;
//        int sum = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            sum += s[i];
//            if (i < t.size()) {
//                sum += t[i];
//            }
//            C.push_back(sum % 10);
//            sum /= 10;
//        }
//        if (sum) {
//            C.push_back(sum);
//        }
//        return C;
//    }
//};

//#include<iostream>
//#include<vector>
//using namespace std;
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) : val(x), next(nullptr) {}
// };
// 
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param head1 ListNode类
//     * @param head2 ListNode类
//     * @return ListNode类
//     */
//    ListNode* addInList(ListNode* head1, ListNode* head2) {
//        // write code here
//        vector<int> q1;
//        vector<int> q2;
//        while (head1) {
//            q1.push_back(head1->val);
//            head1 = head1->next;
//        }
//        while (head2) {
//            q2.push_back(head2->val);
//            head2 = head2->next;
//        }
//        vector<int> qq1;
//        vector<int> qq2;
//        for (int i = q1.size() - 1; i >= 0; i--)
//        {
//            qq1.push_back(q1[i]);
//        }
//        for (int i = q2.size() - 1; i >= 0; i--)
//        {
//            qq2.push_back(q2[i]);
//        }
//        vector<int> q = jia(qq1, qq2);
//        ListNode* p = new ListNode(0);
//        ListNode* pp = p;
//        for (int i = q.size() - 1; i >= 0; i--) {
//            ListNode* p1 = new ListNode(q[i]);
//            pp->next = p1;
//            pp = pp->next;
//        }
//        return p->next;
//    }
//    vector<int> jia(vector<int>& s, vector<int>& t) {
//        if (s.size() < t.size()) {
//            return jia(t, s);
//        }
//        vector<int> C;
//        int sum = 0;
//        for (int i = 0; i < s.size(); i++) {
//            sum += s[i];
//            if (i < t.size()) {
//                sum += t[i];
//            }
//            C.push_back(sum % 10);
//            sum /= 10;
//        }
//        if (sum) {
//            C.push_back(sum);
//        }
//        return C;
//    }
//};
//int main()
//{
//    return 0;
//}

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串 第一个整数
     * @param t string字符串 第二个整数
     * @return string字符串
     */
    string solve(string s, string t) {
        // write code here
        vector<int> q1;
        vector<int> q2;
        for (int i = s.size() - 1; i >= 0; i--) {
            q1.push_back(s[i] - '0');
        }
        for (int i = t.size() - 1; i >= 0; i--) {
            q2.push_back(t[i] - '0');
        }
        vector<int> C = che(q1, q2);
        string result;
        for (int i = C.size() - 1; i >= 0; i--) {
            result += to_string(C[i]);
        }
        return result;
    }

    vector<int> che(vector<int>& q1, vector<int>& q2) {
        if (q1.size() < q2.size()) {
            return che(q2, q1);
        }
        vector<int> C;
        vector<int> D;
        vector<int> E;
        for (int i = 0; i < q2.size(); i++) {
            int sum = 0;
            for (int j = 0; j < q1.size(); j++) {
                sum += q2[i] * q1[j];
                D.push_back(sum % 10);
                sum /= 10;
            }
            while (sum) {
                D.push_back(sum % 10);
                sum /= 10;
            }
            if (!E.size()) {
                C.push_back(D[0]);
                for (int i1 = 1; i1 < D.size(); i1++) {
                    E.push_back(D[i1]);
                }
                D.clear();
            }
            else {
                vector<int> F = jia(D, E);
                C.push_back(F[0]);
                E.clear();
                for (int i2 = 1; i2 < F.size(); i2++) {
                    E.push_back(F[i2]);
                }
                F.clear();
                D.clear();
            }
        }
        for (int i = 0; i < E.size(); i++)
        {
            C.push_back(E[i]);
        }
        while (C.size() > 1)
        {
            if (C[C.size() - 1] == 0)
            {
                C.pop_back();
            }
            else {
                break;
            }
        }
        return C;
    }

    vector<int> jia(vector<int>& s, vector<int>& t) {
        if (s.size() < t.size()) {
            return jia(t, s);
        }
        vector<int> C;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            sum += s[i];
            if (i < t.size()) {
                sum += t[i];
            }
            C.push_back(sum % 10);
            sum /= 10;
        }
        if (sum) {
            C.push_back(sum);
        }
        return C;
    }
};
int main()
{
    return 0;
}
