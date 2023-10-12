/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &A) {
        int i,j,k,l,h,peak=0;
        l=0;
        h=A.length()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(A.get(mid)<A.get(mid+1)){
                peak=mid+1;
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
        l=0;
        h=peak;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(A.get(mid)<target){
                l=mid+1;
            }
            else if(A.get(mid)>target)h=mid-1;
            else{
                return mid;
            }
        }
        l=peak+1;
        h=A.length()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(A.get(mid)<target){
                h=mid-1;
            }
            else if(A.get(mid)>target)l=mid+1;
            else return mid;
        }
        return -1;
        
    }
};