class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // int t=(abs(ax1)+abs(ax2))*(abs(ay1)+abs(ay2));
        // int k=(abs(bx1)+abs(bx2))*(abs(by1)+abs(by2));
        int t=(ax2-ax1)*(ay2-ay1);
        int k=(bx2-bx1)*(by2-by1);
        int s=t+k; 
        if (ax2 <= bx1 || ay1 >= by2 || ax1 >= bx2 || ay2<= by1) {
        return s;
        }
        int a,b,l,m;
        l=min(ax2,bx2)-max(ax1,bx1);
        m=min(ay2,by2)-max(ay1,by1);
        b=l*m;
        return s-b; 
    }
};