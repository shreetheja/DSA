#include"bits/stdc++.h"
#include<iostream>
using namespace std;
class TransposeMat
{
private:
public:
    vector<vector<int>> getTranspose(vector<vector<int>> arr,int n)
    {
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {       
                if(i==j){
                    continue;
                }
                int temp = arr[i][j];
                arr[j][i] = arr[i][j];
                arr[i][j] = temp;
            }
        }
        
    }

};


