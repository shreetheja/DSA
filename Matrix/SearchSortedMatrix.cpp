//https://leetcode.com/problems/search-a-2d-matrix/
#include"bits/stdc++.h"
#include<iostream>
using namespace std; 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index = searchRow(matrix,target);
        if(index==-1) 
        return false;
        else if(index==-2)
        return true;
        vector<int> rowMt = matrix[index];
        for(int i=0;i<rowMt.size();i++){
            if(rowMt[i]==target){
                return true;
            }
        }
        return false;
    }
    int searchRow(vector<vector<int>> matrix,int target){
        int i;
        for(i=0;i<matrix.size();i++){
                if(matrix[i][0]==target)
                    return -2;
                if(matrix[i][0]>target){
                    return i-1;
                }
            }
        return i-1;
    }
    bool binarySearch(vector<int> matrix,int target)
    {
        int l =0;
        int h=matrix.size();
        int m;
        while(l<=h)
        {
            m = (l+h)/2;
            if(matrix[m]==target)
            {
                return true;
            }
            else if(matrix[m]<target)
            {
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return false;
    }
};