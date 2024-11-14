#include <iostream>

using namespace std;

struct linkedlist {
	int data;
	struct linkedlist *link;
};
struct HeadNode {
	linkedlist* head; // Node를 가리키는 포인터, head
};

class LinkedList {

public:
	/*리스트 생성, 헤드노드 */
	HeadNode* createList() {
		HeadNode* H = new HeadNode; // HeadNode를 가리키는 포인터, H
		H->head = NULL;
		return H;
	}

	void addNode(HeadNode* H, int x) {
		linkedlist* NewNode = new linkedlist;
		linkedlist* LastNode;
		NewNode->data = x;
		NewNode->link = NewNode;
		//cout << NewNode->data << " ";
		if (H->head == NULL) {
			H->head = NewNode;
			return;
		}

		LastNode = H->head;
		while (LastNode->data !=x-1 ) LastNode = LastNode->link;
		LastNode->link = NewNode;
		NewNode->link = H->head;
	}


	void deleteThisNode(HeadNode* H, int location,int count) {
		linkedlist* delNode;
		linkedlist* prevNode;
		prevNode = H->head;
		/*
		for (;prevNode->data != 7;) {
			prevNode = prevNode->link;
			}
		*/
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < location-1; j++) {
				prevNode = prevNode->link;
			}
			delNode = prevNode->link;
			prevNode->link = delNode->link;
			if (i == count - 1) {
				if(delNode->data==1) cout << count;
				else cout << delNode->data-1;
			}
			else {
				if (delNode->data == 1) cout << count << ", ";
				else cout << delNode->data - 1 << ", ";
			}
			free(delNode);
		}

	}
};

int main() {
	int count = 0;
	int location = 0;
	cin >> count >> location;
	int* list = new int[count];
	int* result = new int[count];

	LinkedList a;
	HeadNode* L = a.createList();
	for (int i = 1; i <= count; i++) {
		a.addNode(L, i);
	}
	cout << "<";
	a.deleteThisNode(L, location, count);
	cout << ">";
}