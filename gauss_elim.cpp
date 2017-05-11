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

  return 0;
}
