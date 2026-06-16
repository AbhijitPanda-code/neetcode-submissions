class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash1,hash2;
        for(char c : s)
        {
            hash1[c]++;
        }
        for(char c : t)
        {
            hash2[c]++;
        }
        return hash1==hash2;
    }
};
