class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int count =0;
        for(int i=0; i<32; i++){
            int a_shift = (a>>i) &1;
            int b_shift = (b>>i) &1;
            int c_shift = (c>>i) &1;

            if(c_shift == 1){
                if(a_shift ==0 && b_shift==0){
                    count++;
                }
            }else{
                count += a_shift + b_shift;
            }
        }
        
        
        return count;
    }
};