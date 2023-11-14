class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> mp;
        set<int> s;

        for(auto i : arr){
            mp[i]++;
        }

        for(auto pair : mp){
            s.insert(pair.second);
        }
        return mp.size()==s.size();
    }
};