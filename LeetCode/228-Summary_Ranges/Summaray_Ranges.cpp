class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        
        std::vector<string> res;
        while (i < nums.size()) {
            int tmp = i;
            while (j+1 < nums.size()) {
                j += 1;
                if (nums[tmp]+1 != nums[j]) {
                    j -= 1;
                    break;
                }
                tmp += 1;
            }
            
            if (nums[i] == nums[j]) {
                std::string str = std::to_string(nums[i]);
                res.push_back(str);

            } else {
                std::string str = std::to_string(nums[i]) + "->" + std::to_string(nums[j]);
                res.push_back(str);
                i = j;
            }
            i += 1;
            j += 1;
        }
        return res;
    }
};
