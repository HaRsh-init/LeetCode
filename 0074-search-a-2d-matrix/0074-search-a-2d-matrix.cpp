class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row=matrix.size(), col=matrix[0].size();
        int top=0, bot=row-1;

        while(top<=bot){
            int line = top +(bot-top)/2;
            if(target>matrix[line][col-1]){
                top = line+1;
            }
            else if(target<matrix[line][0]){
                bot = line-1;
            }
            else{
                break;
            }
        }

        if(!(top<=bot)){
            return false;
        }

        int roww = (top+bot)/2;
        int l=0, r=col-1;
        while(l<=r){
            int m= l+(r-l)/2;
            if(target > matrix[roww][m]){
                l = m+1;
            }
            else if(target < matrix[roww][m]){
                r = m-1;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};
