/*

Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: false

Constraints:

    1 <= s.length, t.length <= 5 * 104
    s and t consist of lowercase English letters.

https://leetcode.com/problems/valid-anagram/
*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        // Store all original letters and # of occurences in 
        // a hash map
        unordered_map<char, int> tmp;
        for(int i=0; i<s.size(); i++){
            // s[i] not in map, insert it
            tmp[s[i]]++;
        }

        // Iterate over chars in new word
        for(int i=0; i < t.size(); i++){
            // Check if value is > 0
            if(tmp[t[i]] > 0){
                tmp[t[i]]--;
            }else{
                return false;
            }
        }

        // If all values in hash are 0, return true
        for(int i=0; i < s.size(); i++){
            if(tmp[s[i]] > 0){
                return false;
            }
        }
        return true;
    }
};