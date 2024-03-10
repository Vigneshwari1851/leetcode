// Source : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum =0;
        while(n != 0){
            //to seprate num
            int digit = n%10;
            product*=digit;
            sum+=digit;
            n=n/10;

        }
        int answer = product - sum;
        return answer;
    }
};
