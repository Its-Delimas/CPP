#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> ticketNo;
  const int Limit = 100;

  cout << "Enter " << Limit << " ticket numbers:\n";
  for (int i = 0; i < Limit; ++i) {
    int value;
    cin >> value;
    ticketNo.push(value);
  }

  cout << "\nProcessing tickets in FIFO order:\n";
  while (!ticketNo.empty()) {
    cout << ticketNo.front() << '\n';
    ticketNo.pop();
  }

  return 0;
}
