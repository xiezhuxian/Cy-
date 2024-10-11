/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> Int(vector<int>& A, vector<int>& B) {
        vector<int> C;
        if (A.size() < B.size())
            return Int(B, A);
        int t = 0;
        for (int i = 0; i < A.size(); i++) {
            t += A[i];
            if (i < B.size())
                t += B[i];
            C.push_back(t % 10);
            t /= 10;
        }
        if (t)
            C.push_back(t);
        return C;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = new ListNode(0); //创建一个哑节点作为结果链表的头节点
        //ListNode* p = (ListNode*)malloc(sizeof(ListNode));
        vector<int> a;
        vector<int> b;
        while (l1) {
            a.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2) {
            b.push_back(l2->val);
            l2 = l2->next;
        }
        vector<int> sum = Int(a, b);
        ListNode* l3 = p;
        for (vector<int>::iterator it = sum.begin();
             it != sum.end(); ++it) {
            l3->next = new ListNode(*it);
            l3 = l3->next;
        }
        l3->next = nullptr;
        return p->next;
    }
};
