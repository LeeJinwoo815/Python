#include <iostream>
#include <string>
using namespace std;

struct node {
 public:
  string �̸�;
  int �й� = 0;
  float �뵷 = 0.000f;
  node* p_next = nullptr;
};

node* head = nullptr;

void input_node() {
  node* node1 = new node;
  node1->�̸� = "������";
  node1->�й� = 202131419;
  node1->�뵷 = 250000;

  head = node1;

  node* node2 = new node;
  node2->�̸� = "�ѿ���";
  node2->�й� = 202131422;
  node2->�뵷 = 300000;

  node1->p_next = node2;

  node* node3 = new node;
  node3->�̸� = "������";
  node3->�й� = 202131456;
  node3->�뵷 = 300000;

  node2->p_next = node3;

  node* node4 = new node;
  node4->�̸� = "������";
  node4->�й� = 202131457;
  node4->�뵷 = 300000;

  node3->p_next = node4;
}

void print_node() {
  node* ptr = head;

  while (ptr != nullptr) {
    cout << ptr->�̸� << " " << ptr->�й� << " " << ptr->�뵷 << endl;
    ptr = ptr->p_next;
  }
}

int main() {
  input_node();
  print_node();

  return 0;
}