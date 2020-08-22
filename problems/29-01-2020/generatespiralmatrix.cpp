#include "bits/stdc++.h"
using namespace std;

void generateMatrix(int);
void fill(vector<vector<int>> &, int, bool, int, bool);

int main()
{
  generateMatrix(4);
}

static int cell = 1;
void generateMatrix(int A)
{
  int rowSeq[A];
  int colSeq[A];

  vector<vector<int>> spiralMatrix;
  spiralMatrix.resize(A, std::vector<int>(A, 0));

  // Generating row seq
  bool start = true;
  for (int i = 0, j = 0; i < A; i++)
  {
    if (start)
    {
      rowSeq[i] = j;
    }
    else
    {
      rowSeq[i] = A - 1 - j;
      j++;
    }
    start = !start;
  }

  // Generating col seq
  start = false;
  for (int i = 0, j = 0; i < A; i++)
  {
    if (start)
    {
      colSeq[i] = j;
      j++;
    }
    else
    {
      colSeq[i] = A - 1 - j;
    }
    start = !start;
  }

  for (size_t i = 0; i < A; i++)
  {
    spiralMatrix[0][i] = cell++;
  }

  bool straight = true;
  for (size_t i = 3; i > 0; i--)
  {
    fill(spiralMatrix, rowSeq[A - i], true, i, straight);
    straight = !straight;
    fill(spiralMatrix, rowSeq[A - i], false, i, straight);
  }

  for (int i = 0; i < A; i++)
  {
    for (int j = 0; j < A; j++)
    {
      cout << spiralMatrix[i][j] << " ";
    }
    cout << endl;
  }
}
void fill(vector<vector<int>> &spiralMatrix, int currentRowCol, bool fixCol, int count, bool sequence)
{
  if (sequence)
  {

    for (size_t i = spiralMatrix.size() - count; i <= count; i++)
    {
      if (fixCol)
        spiralMatrix[i][currentRowCol] = cell++;
      else
        spiralMatrix[currentRowCol][i] = cell++;
    }
  }
  else
  {
    for (size_t i = spiralMatrix.size() - count; i <= count; i++)
    {
      if (fixCol)
        spiralMatrix[count - i][currentRowCol] = cell++;
      else
        spiralMatrix[currentRowCol][count - i] = cell++;
    }
  }
}
