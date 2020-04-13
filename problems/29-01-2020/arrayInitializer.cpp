#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &);

int main()
{
    vector<vector<int>> A = {{0, 0},
                             {1, 0}};
    // vector<vector<int>> A = {{1, 0, 1},
    //                          {1, 1, 1},
    //                          {1, 1, 1}};
    setZeroes(A);
    int row = A.size();
    int col = A[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void setZeroes(vector<vector<int>> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int row = A.size();
    int col = A[0].size();
    int colArray[col];
    int rowArray[row];
    for (int i = 0; i < col; i++)
    {
        colArray[i] = 1;
    }
    for (int i = 0; i < row; i++)
    {
        rowArray[i] = 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (A[i][j] == 0)
            {
                colArray[j] = 0;
                rowArray[i] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        if (rowArray[i] == 0)
        {
            for (int j = 0; j < col; j++)
            {
                A[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < col; i++)
    {
        if (colArray[i] == 0)
        {
            for (int j = 0; j < row; j++)
            {
                A[j][i] = 0;
            }
        }
    }
}