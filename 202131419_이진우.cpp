#include <iostream>
#include <string>
using namespace std;

struct node {
 public:
  string ÀÌ¸§;
  int ÇÐ¹ø = 0;
  float ¿ëµ· = 0.000f;
  node* p_next = nullptr;
};

node* head = nullptr;

void input_node() {
  node* node1 = new node;
  node1->ÀÌ¸§ = "ÀÌÁø¿ì";
  node1->ÇÐ¹ø = 202131419;
  node1->¿ëµ· = 250000;

  head = node1;

  node* node2 = new node;
  node2->ÀÌ¸§ = "ÇÑ¿¹Âù";
  node2->ÇÐ¹ø = 202131422;
  node2->¿ëµ· = 300000;

  node1->p_next = node2;

  node* node3 = new node;
  node3->ÀÌ¸§ = "±èÅÂÇü";
  node3->ÇÐ¹ø = 202131456;
  node3->¿ëµ· = 300000;

  node2->p_next = node3;

  node* node4 = new node;
  node4->ÀÌ¸§ = "±èÈÆÈñ";
  node4->ÇÐ¹ø = 202131457;
  node4->¿ëµ· = 300000;

  node3->p_next = node4;
}

void print_node() {
  node* ptr = head;

  while (ptr != nullptr) {
    cout << ptr->ÀÌ¸§ << " " << ptr->ÇÐ¹ø << " " << ptr->¿ëµ· << endl;
    ptr = ptr->p_next;
  }
}

int main() {
  input_node();
  print_node();

  return 0;
}