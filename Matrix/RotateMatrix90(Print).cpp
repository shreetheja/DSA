//https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
/*
Input:
1 2 3 
4 5 6
7 8 9  
Output:
7 4 1 
8 5 2
9 6 3

Input:
1 2
3 4
Output:
3 1
4 2
*/
#include"bits/stdc++.h"
#include<iostream>
using namespace std;
void solve(vector<vector<int>> arr,int);

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++){
        int e;
        cin>>e;
        row.push_back(e);
        }
        arr.push_back(row);
    }
    solve(arr,n);
    return 0;
}
void solve(vector<vector<int>> arr,int n){
    cout<<endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = n-1; i>=0; i--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}