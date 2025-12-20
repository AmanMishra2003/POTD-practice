/*
https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/description/
*/
//we check unit wise and looked how many 1 we need per unit place
class Solution {
public:
    int minPartitions(string n) {
        sort(n.rbegin(),n.rend());
        return n[0]-'0';
    }
};

/*
Input: n = "32"
Output: 3
Explanation: 10 + 11 + 11 = 32

32
11
11
10

82734
11111
11111
10111
10101
10100
10100
10100
10000
*/