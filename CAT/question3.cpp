#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<string> names;
  string value[10];

  for (int i = 0; i < 10; i++) {
    cout << "Enter the name : ";
    cin >> value[i];
    names.push(value[i]);
  }

  while (!names.empty()) {
    cout << names.top() << '\n';
    names.pop();
  }
  return 0;
}