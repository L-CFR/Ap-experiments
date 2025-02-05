
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count=0;
        int k=n;
        while(n>0){
            int r=n%10;
            if(r!=0){
                if(k%r==0){
                    count+=1;
                }
            }
            n=n/10;
        }
        return count;
        
    }
};
