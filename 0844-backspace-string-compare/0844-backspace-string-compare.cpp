class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string a;
        string b;

        for(char c : s) {
            if(c != '#')
                a.push_back(c);
            else if(!a.empty())
                a.pop_back();
        }

        for(char c : t) {
            if(c != '#')
                b.push_back(c);
            else if(!b.empty())
                b.pop_back();
        }

        return a == b;
    }
};