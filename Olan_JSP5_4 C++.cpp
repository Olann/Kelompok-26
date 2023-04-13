#include <iostream>
using namespace std;

int main() {
  int var[5] = {1,2,3,4,5};
  int* varPtr = var;

  for (int i = 0; i < 5; i++) {
    cout << *varPtr << " ";
    varPtr++;
  }
  cout << endl;

  return 0;
}

