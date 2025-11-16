#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool anagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
int main()
{
    string s, t;
    cin >> s >> t;
    Solution sl;
    bool result = sl.anagram(s, t);
    cout << result << endl;
    return 0;
}