#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result;
        result[0] = nums[0];
        int index = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            while(index < nums.size())
            {
                if(nums[i] == result[index])
                {
                    continue;
                } else
                {
                    nums[i] = result[index++];
                }
            }
        }
        return result.size();
    }
};
int main() {
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << s.removeDuplicates(nums);
    return 0;
}