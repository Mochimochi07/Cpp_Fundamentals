#include <iostream>
using namespace std;

class Rectangle {
  public:
    int width;
    int height;
    int area() {
      return width * height;
    }
};
int main() {
  Rectangle r = {4, 5};
  cout << r.area() << endl; 
  return 0;
}
