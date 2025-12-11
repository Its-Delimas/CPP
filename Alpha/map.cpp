#include <iostream>
#include <limits>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<int, string> students;

  students[1] = "Spencer";
  students[2] = "Patrick";
  students[3] = "Reuben";
  students[4] = "Kingston";

  char option;
  do {
    cout << "\nMenu:\n";
    cout << "1: display of students\n";
    cout << "2: Search students using ID\n";
    cout << "3: delete a student\n";
    cout << "4: Exit\n";
    cout << "Enter option: ";
    cin >> option;

    if (option == '1') {
      if (students.empty()) {
        cout << "No students.\n";
      } else {
        for (const auto &p : students) {
          cout << "ID: " << p.first << ", Name: " << p.second << '\n';
        }
      }
    } else if (option == '2') {
      int reg_number;
      cout << "Enter the registration number: ";
      if (!(cin >> reg_number)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid ID input.\n";
      } else {
        auto it = students.find(reg_number);
        if (it != students.end()) {
          cout << "Found: ID: " << it->first << ", Name: " << it->second
               << '\n';
        } else {
          cout << "Student not found\n";
        }
      }
    } else if (option == '3') {
      int reg_number;
      cout << "Enter the registration number to delete: ";
      if (!(cin >> reg_number)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid ID input.\n";
      } else {
        size_t removed = students.erase(reg_number);
        if (removed) {
          cout << "Deleted student with ID " << reg_number << '\n';
        } else {
          cout << "Student not found\n";
        }
      }
    } else if (option == '4') {
      cout << "Exiting.\n";
    } else {
      cout << "Invalid option. Choose 1-4.\n";
    }

  } while (option != '4');

  return 0;
}