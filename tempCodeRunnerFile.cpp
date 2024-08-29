#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int Ans = target - nums[i];
            if (numMap.count(Ans)) {
                return {numMap[Ans], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" <<endl;
}