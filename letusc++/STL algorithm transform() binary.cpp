#include <iostream>     
#include <algorithm>    // std::transform
#include <vector>       // std::vector
using namespace std;

// Binary function applied by the transform function
int op_add (int i, int j) { 
  return j/i; 
}

int main () {
  int n = 5;
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {6, 7, 8, 9, 10};
  int output[n];

  std::cout << "Input array1:";
  for(int i=0; i<n; i++){
    cout << ' ' << arr1[i];
  }
  cout << '\n';
  std::cout << "Input array2:";
  for(int i=0; i<n; i++){
    cout << ' ' << arr2[i];
  }
  cout << '\n';
  
  // The transform function takes start and end position
  // of first array, start position of second array,
  // start position of output array and the binary
  // function to apply to the input arrays.
  std::transform (arr1, arr1+n, arr2, output, op_add);

  std::cout << "Output array:";
  for(int i=0; i<5; i++)
  {
    cout << ' ' << output[i];
  }
  cout << '\n';

  return 0;
}
