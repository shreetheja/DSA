//https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
// { Driver Code Starts
// Initial Template for C++

/*Input:
N=4
Mat=[[10,20,30,40],
[15,25,35,45] 
[27,29,37,48] 
[32,33,39,50]]
Output:
10 15 20 25 
27 29 30 32
33 35 37 39
40 45 48 50
Explanation:
Sorting the matrix gives this result.
*/

#include"bits/stdc++.h"
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> elements = getElements(Mat,N);
        sort(elements.begin(),elements.end());
        int m=0;
        int n=0;
        for (int i = 0; i < N*N; i++)
        {
            Mat[m][n] = elements[i];
            n++;
             /* code */
            if(((i+1)%N)==0)
            {
                m++;
            }
        }
        return Mat;
        
    }
    vector<int> getElements( vector<vector<int>> Mat,int N)
    {
        vector<int> returningVec;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                returningVec.push_back(Mat[i][j]);
            }
        }
        return returningVec;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
} 