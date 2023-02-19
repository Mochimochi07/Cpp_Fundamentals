#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
  string occupation;
};
int main() {
  Person p = {"Aj", 30, "Detective"};
  cout << p.name << endl; 
  return 0;
}
