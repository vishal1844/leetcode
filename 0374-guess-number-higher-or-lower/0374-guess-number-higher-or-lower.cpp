/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       int l=1,h=n,i,middle;
        while(l<=h){
            middle=l+(h-l)/2;
            if(guess(middle)==-1){
                h=middle-1;
            }
            else if(guess(middle)==1){
                l=middle+1;
            }
            else{
                return middle;
            }
        }
        return n;
    }
};