#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {

  queue<string> bankQueue;

  bankQueue.push("Spencer");
  bankQueue.push("Clement");
  bankQueue.push("Moreene");

  // serving first customer
  if (!bankQueue.empty()) {
    cout << "Serving customer : " << bankQueue.front() << endl;
    bankQueue.pop();
  }
  // serving second customer
  if (!bankQueue.empty()) {
    cout << "Serving customer : " << bankQueue.front() << endl;
    bankQueue.pop();
  }
  // print the third costomer
  if (!bankQueue.empty()) {
    cout << "Current customer : " << bankQueue.front() << endl;
  } else {
    cout << "the queue is empty <3" << endl;
  }

  return 0;
}