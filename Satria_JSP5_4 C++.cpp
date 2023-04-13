#include <iostream>
using namespace std;

int main() {
  int var[10] = {1,2,3,4,5,6,7,8,9,10};
  int* varPtr = var;

  for (int i = 0; i < 10; i++) {
    cout << *varPtr << " ";
    varPtr++;
  }
  cout << endl;

  return 0;
}
\
