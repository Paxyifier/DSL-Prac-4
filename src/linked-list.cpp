#include<iostream>
using namespace std;
const int LEN = 100;
class Node{
    protected:
        int data;
        Node *next;
    public:
        Node(int data){
            this->data = data;
        }
        Node(int data, Node *next){
            this->data = data;
            this->next = next;
        }
        
}
class Stack{
    protected:
        int arr[LEN];
        int top = -1;
    public:
        // Stack(){

        // }
        int getTop() { 
            return this->arr[this->top];
        }
        int push(int x) {
            this->top++;
            this->arr[top] = x;
            return this->top;
        }
        int pop() {
            if(this->top == -1)
                return -1;
            this->top--;
            return this->arr[top];
        }
};

int main() {
    int ip;
    int op;
    bool run = true;
    Stack s =  Stack();
    while (run) {
        cout << "1. Push element\n2. Pop element\n3. Check top"<< endl;
        cin>>ip;

        switch (ip) {
            case 1:
                cout << "Enter element to push : ";
                cin>>ip;
                s.push(ip);
                break;
            case 2:
                op = s.pop();
                if (op == -1) {
                    cout << "Stack is empty "<<endl;
                }
                else {
                    cout << "Element popped: "<<op<<endl;
                }
                break;
            case 3:
                op = s.getTop();
                if (op == -1) {
                    cout << "Stack is empty "<<endl;
                }
                else {
                    cout << "Top element: "<<op<<endl;
                }
                break;
            default:
                run = false;
                break;
        }
    }
}
