/*
https://leetcode.com/problems/rectangle-area/
*/
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        //rectangle1
        int l1, b1;
        l1 = abs(ax1 - ax2);
        b1 = abs(ay1 - ay2);

        //reactangle2
        int l2, b2;
        l2 = abs(bx1-bx2);
        b2 = abs(by1-by2);

        int AOR1 = l1*b1; //area of rectangle1
        int AOR2 = l2*b2; //area of rectangle2



            int commonL, commonB;
            commonL = max(0,min(ax2,bx2) - max(ax1,bx1));
            commonB = max(0,min(ay2,by2) - max(ay1,by1));
            
            int commonArea = commonL*commonB;

       
        int totalArea = AOR1 + AOR2 - commonArea;

        return totalArea;
    }
};