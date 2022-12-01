#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
  return x + y + 2;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  //int myNum1 = plusFuncInt(8, 5);
  cout<<plusFuncInt(8, 5) <<"\n";
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout<<plusFuncDouble(4.3, 6.26);
 // cout << "Int: " << myNum1 << "\n";
 // cout << "Double: " << myNum2;
  return 0;
}