#include <iostream>
using namespace std;

struct Node {
	//noi dung nut
	int info;
	//truong next tro toi nut tiep theo
	Node* next;

};

void init(Node*& head) {
	head = NULL;
}

Node* createNode(const int x) {
	Node* p = new Node;
	p->info = x;
	p->next = NULL;
	return p;
}

void addLast(Node*& head, const int x) {
	
	Node* p = createNode(x);
	if (head == NULL) {
		head = p;
	}
	else {
		Node* tmp = head;
		while (tmp->next != NULL) {
			tmp = tmp->next;
		}
		tmp->next = p;
	}
}

Node* findKey(Node* head, const int x) {
	Node* tmp = head;
	while (tmp != NULL) {
		if (tmp->info == x) {
			return tmp;
		}
		tmp = tmp->next;
	}
	return NULL;
}

void outputList(Node* head) {
	if (head == NULL) {
		cout << "Danh sach rong !\n";
		return;
	}
	Node* tmp = head;

	while (tmp != NULL) {
			cout << tmp->info << " ";
			tmp = tmp->next;
	}
	
	cout << endl;
}




int main() {
	Node* head;
	//khoi tao rong
	init(head);

	
	addLast(head, 3);
	addLast(head, 5);
	addLast(head, 6);
	outputList(head);

	Node* kq = findKey(head, 3);
	if ( kq != NULL) {
		cout << "Tim thanh cong ! \n";
		cout << kq->info << endl;
	}


	


	

	return 0;
}