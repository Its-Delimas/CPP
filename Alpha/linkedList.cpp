#include <iostream>
#include <string>

using namespace std;

struct Node {
  int id;
  string name;
  Node *next;
  Node(int patientId, const string &patientname)
      : id(patientId), name(patientname), next(nullptr) {}
};

void insertAtEnd(Node *&head, int patientId, const string &patientname) {
  Node *newNode = new Node(patientId, patientname);

  if (head == nullptr) {
    head = newNode;
  }

  Node *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void displayPatients(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << "ID: " << temp->id << ", Name" << temp->name << " " << endl;
    temp = temp->next;
  }
}

int main() {
  Node *head = nullptr;

  insertAtEnd(head, 5463, "Spencer");
  insertAtEnd(head, 102, "Bob");
  insertAtEnd(head, 103, "Charlie");

  displayPatients(head);
  return 0;
}