/*
(Easy)

Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true


Example 2:

Input: nums = [1,2,3,4]
Output: false

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

https://leetcode.com/problems/contains-duplicate/
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Create empty vector
        unordered_set<int> tmp;

        /*
        Iterate through nums, if nums[i] is not in tmp,
        append it. Otherwise, this indicates nums[i] is a duplicate
        and should return true.
        */
        for(int i = 0; i < nums.size(); i++){
            if(tmp.find(nums[i]) != tmp.end()){
                // tmp contains num[i]
                return true;
            }else{
                // tmp does not contain num[i]
                tmp.insert(nums[i]);
            }
        }
        return false;
    }
};