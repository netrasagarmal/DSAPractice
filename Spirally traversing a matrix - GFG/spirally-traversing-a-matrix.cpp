// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int i,top=0,bottom=r-1,left=0,right=c-1;
        int dir=0;
        vector<int> v;
        while((top<=bottom)&&(left<=right))
        {
            if(dir==0)
            {
                for(i=left;i<=right;i++)
                    v.push_back(matrix[top][i]);
                top+=1;
            }
            else if(dir==1)
            {
                for(i=top;i<=bottom;i++)
                    v.push_back(matrix[i][right]);
                right-=1;
            }
            else if(dir==2)
            {
                for(i=right;i>=left;i--)
                    v.push_back(matrix[bottom][i]);
                bottom-=1;
            }
            else if(dir==3)
            {
                for(i=bottom;i>=top;i--)
                    v.push_back(matrix[i][left]);
                left+=1;
            }
            dir=(dir+1)%4;
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends