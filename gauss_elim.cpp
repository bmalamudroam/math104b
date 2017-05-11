#include <string>
#include <iostream>
using namespace std;

int main ()
{
  //get the size of the matrix                                                                                                                                                       
  int size;
  cout << "A is an n-by-n matrix. Enter an integer value for n: " << endl;
  cin >> size;

  //get value's in A                                                                                                                                                                 

  double A[size][size];
  cout << "Enter a_ij as in the following sample matrix: " << endl;
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      cout << "a" << i << j << " ";
    }
    cout << endl << endl << endl;
  }  
  for (int i = 0; i < size; i++) {
    for(int j = 0; j < size; j++) {
      cin >> A[i][j];
    }
  }
  //
  //
  //
  // get values in b[]
  double b[size];
  cout << "Enter b_i as in the following sample vector: " << endl;
  for (int i = 0; i < size; i++) {
    cout << "b" << i <<" ";
  }
  cout << endl;
  for (int i = 0; i < size; i++) {
    cin >> b[i];
  }
  //
  //
  //
  //lets try to implement this thang
  for (int row = 0; row < size; row++)
  {
    if (A[row][row] == 0)
    { 
      for (int other_row = row + 1; other_row < size; other_row++)
      {
        if (A[other_row][row] != 0)
        {
          int* temp = A[other_row];
          A[other_row] = A[row];
          A[row] = A[temp];
          break;
        }
      }
    }
    if (A[row][row] != 0) 
    {
      for (int column = 0; column < size; column++)
      {
        A[row][column] /= A[row][row];
      }
      for (int other_row = row + 1; other_row < size; other_row++)
      {
        for (int column = row; column < size; column++)
        {
          A[other_row][column] -= (A[row][column] * A[other_row][row]);
        }
      }
