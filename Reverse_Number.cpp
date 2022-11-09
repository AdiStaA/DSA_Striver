class Solution {
public:
    int reverse(int x) {
        
       
        long reverse =0;
        while(x!=0){
           
            int lastdigit = x%10;
            reverse=(reverse*10)+ lastdigit;
             if(reverse > INT_MAX || reverse < INT_MIN) return 0;
            x/=10;
            
        }
            
        return reverse;}
    
};
