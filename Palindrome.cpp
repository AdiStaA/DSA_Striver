class Solution {
public:
    bool isPalindrome(int x) {
        long num=0;
        int adi=x;
        if(x<0) return 0;
        while(x!=0){
            int lastdigit =x%10;
            num = num*10+lastdigit;
            x/=10;
            
        }
        if(num==adi){
            return true;
            }
            else {return false;}
        
    }
};
