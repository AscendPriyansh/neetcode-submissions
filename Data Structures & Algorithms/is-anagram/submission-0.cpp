class Solution {
public:
    bool isAnagram(string s, string t) {
        int sum1=0;
        int sum2=0;

        for(int i=0; i<s.size(); i++) {
            sum1+=(s[i]-'0');
        }

        for(int i=0; i<t.size(); i++) {
            sum2+=(t[i]-'0');
        }

        if(sum1==sum2) {
            return true;
        }
        return false;
    }
};
