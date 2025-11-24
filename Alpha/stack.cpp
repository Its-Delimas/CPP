#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> s;

  s.push(10);
  s.push(20);
  s.pop();
  s.push(30);

  cout << "Final top Value: " << s.top();
  return 0;
}
