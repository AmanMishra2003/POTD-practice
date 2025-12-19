/*
https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1
*/
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        return (s2+s2).find(s1)!=string::npos;
    }
};