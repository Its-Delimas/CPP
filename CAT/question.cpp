#include <iostream>
#include <string>
using namespace std;

const int N = 10;

void InputMarks(string name[], int marks[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "Enter name of student " << (i + 1) << ": ";
    cin >> name[i];
    cout << "Enter marks for " << name[i] << ": ";
    cin >> marks[i];
  }
}

int highestScore(const int marks[], int n) {
  int best = marks[0];
  for (int i = 1; i < n; ++i) {
    if (marks[i] > best)
      best = marks[i];
  }
  return best;
}

double findAverage(const int marks[], int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i)
    sum += marks[i];
  return static_cast<double>(sum) / n;
}

int main() {
  string name[N];
  int marks[N];

  InputMarks(name, marks, N);

  int best = highestScore(marks, N);
  double avg = findAverage(marks, N);

  cout << "\nHighest score: " << best << endl;
  cout << "Average: " << avg << endl;

  return 0;
}