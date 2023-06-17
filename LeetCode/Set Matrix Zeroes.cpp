class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    bool cols=1;
	int m=matrix.size(),n=matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				matrix[i][0]=0;
				if(j!=0)
					matrix[0][j]=0;
				else
					cols=0;
			}
		}
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(matrix[i][j]!=0)
			{
                if (matrix[i][0] == 0 || matrix[0][j] == 0) 
				{
                    matrix[i][j] = 0;
                }
            }
        }
    }
	if(matrix[0][0]==0)
	{
		for (int i = 0; i < n; i++) 
		{
			matrix[0][i] = 0;
		}
    }
	if(cols==0)
	{
		for (int j = 0; j < m; j++) 
		{
			matrix[j][0] = 0;
		}
    }
    }
};
