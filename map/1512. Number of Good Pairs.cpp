/*
LINK: https://leetcode.com/problems/number-of-good-pairs/
    Easy
4K
196
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
Example 3:

Input: nums = [1,2,3]
Output: 0


Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
Accepted
464.5K
Submissions
526.7K
Acceptance Rate
88.2%
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calculate(int n)
    {
        return n * (n + 1) / 2;
    }
    int numIdenticalPairs(vector<int> &nums)
    {
        map<int, int> m;
        for (auto &val : nums)
        {
            m[val]++;
        }
        int ans = 0;
        for (auto &val : m)
        {

            ans += calculate(val.second - 1);
        }

        return ans;
    }
};