#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//-----------------------METHOD 1------------------------------------
//optimal for printing index
//Time Complexity = O(N)
//Space Complexity = O(N)

vector<int> twoSum1(vector<int>& nums, int target) {
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

//------------------------------METHOD 2---------------------------------------------

//time complexity = O(N)+O(Nlog(N))
//space complexity = O(1)

string twoSum2(vector<int>& nums, int target) {
    int n = nums.size();
    int left = 0,right = n-1;
    sort(nums.begin(),nums.end());
    while(left<right){
        int sum = nums[left]+nums[right];
        if(sum>target) right--;
        else if(sum<target) left++;
        else return "YES";
    }
        return "NO";
    }

int main(){
    vector<int> nums = {2, 5, 11, 7, 15};
    int target = 9;
    vector<int> result = twoSum1(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" <<endl;
    string result2 = twoSum2(nums, target);
    cout << result2 << endl;
}