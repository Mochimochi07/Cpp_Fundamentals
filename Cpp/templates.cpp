#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b) {
  return a + b;
}
int main() {
  int x = add(3, 4);
  double y = add(2.5, 3.5);
  return 0;
}
