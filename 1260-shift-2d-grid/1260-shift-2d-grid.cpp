class Solution {
public:
    void swap(int a, int b){
        int temp= a;
        a =b;
        b = temp;
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int len = n*m;

        k = k%len;
        if(k==0) return grid;

        vector<int> flat(len);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                flat[i*m+j] = grid[i][j];
            }
        }

        vector<int> shifted(len);
        for(int i=0; i<len; i++){
            int newPos = (i+k)%len;
            shifted[newPos] = flat[i];
        }

        vector<vector<int>> newGrid(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                newGrid[i][j] = shifted[i*m+j];
            }
        }
        return newGrid;
    }

};