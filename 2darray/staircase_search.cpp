bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int smallest=matrix[0][0],largest=matrix[m-1][n-1];
        
        if(target<smallest or target >largest)
            return false;
        
        int i=0,j=n-1;
        
        while(i<m and j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }

    //
     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }