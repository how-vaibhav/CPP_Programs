#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int v) {
        val = v;
        next = nullptr;
    }
};

class List {
private:
    Node *head;
    Node *tail;

public:
    List() { head = tail = nullptr; }

    // Destructor to prevent memory leaks when the list object is destroyed
    ~List() {
        while (head != nullptr) {
            pop_front();
        }
    }

    void push_front(int val) {
        Node *newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node *newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void show() {
        if (head == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        Node *ptr = head;
        while (ptr != nullptr) {
            cout << ptr->val << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }

    void pop_back() {
        if (head == nullptr) return;

        cout << "Deleting back: " << tail->val << endl;
        if (head == tail) {
            delete head;
            head = tail = nullptr;
        } else {
            Node *ptr = head;
            while (ptr->next != tail) {
                ptr = ptr->next;
            }
            delete tail;
            tail = ptr;
            tail->next = nullptr;
        }
    }

    void pop_front() {
        if (head == nullptr) return;

        Node *temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
        }
        delete temp;
    }
};

int main() {
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_back(21);
    l1.push_back(22);
    
    cout << "Initial list: ";
    l1.show();

    l1.pop_back();
    l1.show();

    l1.pop_front();
    l1.show();

    return 0;
}