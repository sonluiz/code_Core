#include<iostream>
#include<string>

using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();
	
	//tao data of note
	struct Node{
		int data;
		Node* next;
	};

	//tao node new and add in new_node
	void add(int value) {
		Node* new_node = new Node();
		new_node->data = value;
		new_node->next = head_p;
		head_p = new_node;
	}

	//delete node
	void delete_note() {
		if (head_p != NULL) {
			Node *node_dele = head_p;
			head_p = head_p->next;
			delete(node_dele);
		}
		
	}
	void show_note() {
		Node *t = head_p;
		while (t != NULL) {
			int value = t->data;
			cout << value << " - " << t->next << endl;
			t = t->next;
		}
	}
	void show_note_begin() {
		cout << "head_p: " << 
			" ; value begin innitial: " << head_p->data << 
			"  ; poiter next intial: " << head_p->next;
	}

	
private:
	//create node quan ly cac node
	Node *head_p;

};

MyClass::MyClass()
{
	head_p = NULL;
}

MyClass::~MyClass()
{
	Node* note_huy = head_p;
	while (note_huy != NULL) {
		Node* note_huy_A = note_huy;
		note_huy = note_huy->next;
		delete(note_huy_A);
		note_huy_A = NULL;
	}
} 

int main() {
	MyClass a;
	a.show_note_begin();
	cout << endl;
	a.add(2);
	a.add(3);
	a.add(4);
	a.add(5);
	a.show_note();

	return 0;
}