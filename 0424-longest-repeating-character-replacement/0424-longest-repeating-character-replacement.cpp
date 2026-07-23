class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> f;
        int low = 0;
        int res = 0;

        for(int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            int maxcnt = 0;
            for(auto it : f) {
                maxcnt = max(maxcnt, it.second);
            }

            int len = high - low + 1;
            int diff = len - maxcnt;

            while(diff > k) {

                f[s[low]]--;

                if(f[s[low]] == 0)
                    f.erase(s[low]);

                low++;

                maxcnt = 0;
                for(auto it : f) {
                    maxcnt = max(maxcnt, it.second);
                }

                len = high - low + 1;
                diff = len - maxcnt;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};