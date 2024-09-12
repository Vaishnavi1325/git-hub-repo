//question 1
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insertatbegin(Node* &Head,int value){
    
    if(Head==NULL){           //insert at the begining
        Head=new Node(value);
    }
    else {
        Node* temp=new Node(value);
        temp->next=Head;
        Head=temp;

    }
    
}
void print (Node* &Head ){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* Head=new Node (40);
   insertatbegin(Head,30);
   insertatbegin(Head,20);
   insertatbegin(Head,10);
   print(Head);
}
