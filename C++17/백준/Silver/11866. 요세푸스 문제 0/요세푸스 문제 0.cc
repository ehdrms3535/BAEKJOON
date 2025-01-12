#include <iostream>

using namespace std;

class CircularLinkedList {
private:
    struct node {
        int data;
        struct node* link;

    };
    node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void append(int data) {
        node* newNode = new node;
        newNode->data = data;

        if (!head) {
            head = newNode;
            head->link = head;
        }

        else {
            node* temp = head;
            while (temp->link != head) {
                temp = temp->link;
            }
            temp->link = newNode;
            newNode->link = head;
        }
    }

    void deleteNode(int T) {
        cout << "<";
        if (!head) {
            return; 
        }

        node* temp = head;
        node* prev = temp;

        int count = 0;
        do {
            count++;
            prev = prev->link;
        } while (prev != head);

        if (count == 1) {
            cout << head->data << ">";
            delete head;
            head = nullptr;
            return;
        }

        while (count > 1) {
            
            for (int i = 0; i < T - 1; i++) {
                prev = temp;
                temp = temp->link;
            }

            cout << temp->data << ", ";

            if (prev) {
                prev->link = temp->link;
            }
            if (temp == head) {
                head = head->link;
            }

            //delete temp;

            temp = prev->link;
            count--;
        }
        
        cout << temp->data << ">";
        delete temp;
    }
    ~CircularLinkedList() {}
};

int main() {
	int N,T;
	cin >> N >> T; 

    CircularLinkedList newCircular;
    for (int i = 1; i <= N; i++) {
        newCircular.append(i);
    }
    newCircular.deleteNode(T);

    return 0;
}