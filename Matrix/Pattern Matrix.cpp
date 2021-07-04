// { Driver Code Starts
#include"bits/stdc++.h"
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    void spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        bool startRow = true;
        int Cr=1;
        int Cc = c;
        while(1)
        {
            if(startRow==true){
                if(!starightRow(matrix,Cr,c))
                {
                    cout<<"Once";
                    break;
                }
                Cr++;
                
            }
            else
            {
                if(!straightColumn(matrix,r,Cc))
                {
                    cout<<"Twice";
                    break;
                }
                Cc--;
            }
            startRow = !startRow;
        }
            
    }
    bool starightRow(vector<vector<int>> &matrix,int r,int Origc)
    {
        bool done = false;
        for(int i=0;i<Origc;i++)
        {
            if(matrix[r-1][i]==-1)
            {
                continue;
            }
            done = true;
            cout<<" _> "<<matrix[r-1][i]<<endl;
            matrix[r-1][i]=-1;

        }
        return done;
    }
    bool straightColumn(vector<vector<int>> &matrix,int Origr,int c)
    {
        bool done = false;
        for(int i=0;i<Origr;i++)
        {
            if(matrix[i][c-1]==-1)
            {
                continue;
            }
            done = true;
            cout<<" _> "<<matrix[i][c-1]<<endl;
            matrix[i][c-1]=-1;
        }
        
        return done;
    }
    
};

// { Driver Code Starts.
int main() {
    vector<vector<int>> matrix;
    int r,c;
    cin>>r;
    cin>>c;
    for(int i=0;i<r;i++){
        vector<int> row;
       for(int j=0;j<c;j++){
        int a;
        cin>>a;  
        row.push_back(a);
        }
        matrix.push_back(row);
    }
    Solution s;
    s.spirallyTraverse(matrix,r,c);

}  // } Driver Code Ends