class Solution {
public:
    int reverse(int x) {
        int c=0;
        int k=0;
        if (x==INT_MIN) {
            return 0;
        }
        int y=abs(x);
        while(y>0){
            int r=y%10;
            y=y/10;
            if (k > INT_MAX / 10 || (k == INT_MAX / 10 && r > INT_MAX % 10 )) {
                return 0;
            }
            k=k*10+r; 
        }
        if(x>0){
            return k;
        }else{
            return -k;
        }
        
        
    }
};
