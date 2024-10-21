class Solution {
public:
    string longestPalindrome(string s) {
        if(s=="")
        {
            return "";
        }
        string q;
        for(int i=0;i<s.size();i++)
        {
            findstring(s,i,i,q);

            findstring(s,i,i+1,q);
        }
        return q;
    }
    void findstring(const string& s,int left,int right,string& q)
    {
        while(left>=0&&right<s.size()&&s[left]==s[right])
        {
            --left;
            ++right;
        }
        int length=right-left-1;
        if(length>q.size())
        {
            q=s.substr(left+1,length);
        }
    }
};
