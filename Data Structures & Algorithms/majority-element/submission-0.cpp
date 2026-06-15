class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int i=0; i<nums.size(); i++) {
            mpp[nums[i]]++;
        }

        int store=-1;
        for(auto it: mpp) {
            if(it.second>(nums.size()/2)) {
                store=it.first;
            }
        }

        return store;
    }
};