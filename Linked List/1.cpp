#include<iostream>
using namespace std;

class Node {
    public:
        int val ; 
        Node *next;
        Node(int v) {
            val= v;
            next = NULL;
        }
};

class List{
    private:
        Node *head ;
        Node *tail;
    public:
        List(){
            head = tail= NULL;}
};

int main(){
    
    return 0;
}