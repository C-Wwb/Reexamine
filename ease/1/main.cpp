#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    //cout << i << " " << j;
                    return {i, j};
                }
            }
        }
        return {};
    }
};
int main() {
    vector<int> nums = {3, 2, 4, 6, 8};
    Solution s;
    vector<int> result = s.twoSum(nums, 6);
    for(auto array: result)
    {
        cout << array << " ";
    }
}