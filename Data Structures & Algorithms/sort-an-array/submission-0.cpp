class Solution {
public:
    vector<int> mergesort(vector<int> &nums, int i, int j) {
        vector<int> res;
        int mid = (i+j)/2;

        int l=i;
        int r=mid+1;

        while(l<=mid && r<=j) {
            if(nums[l]<=nums[r]) {
                res.push_back(nums[l++]);
            }
            else {
                res.push_back(nums[r++]);
            }
        }

        while(l<=mid) {
            res.push_back(nums[l++]);
        }

        while(r<=j) {
            res.push_back(nums[r++]);
        }

        for(int k=0; k<res.size(); k++) {
            nums[i+k] = res[k];
        }

        return res;
    }

    vector<int> merge(vector<int> &nums, int i, int j) {
        if (i>=j) return {nums[i]};

        int mid = (i+j)/2;

        merge(nums, i, mid);
        merge(nums, mid+1, j);

        return mergesort(nums, i, j);
    }

    vector<int> sortArray(vector<int>& nums) {
        merge(nums, 0, nums.size()-1);
        return nums;
    }
};