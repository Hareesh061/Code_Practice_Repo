// delete last node of the linked list

#include<bits/stdc++.h>
using namespace std;


class Node{

public:
 int data;
 Node * next;

 Node(int data1,Node * next1){
    data=data1;
    next= next1;
 }

 Node(int data1){
    data=data1;
    next=nullptr;
 }
};


void print(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }

}

Node * deleteTail(Node * head){
    if(head==NULL || head->next ==NULL)
    return NULL;

    Node * temp = head;

    while(temp->next->next !=NULL){
        temp=temp->next;
    }

    delete temp->next;

    temp->next = nullptr;

    return head;


}

int main()
{

    vector<int> arr = {10,20,30,6};

    Node * head = new Node(arr[0]);

    head->next = new Node(arr[1]);

    head->next->next = new Node(arr[2]);

    head->next->next->next = new Node(arr[3]);

    head = deleteTail(head);

print(head);
    return 0;
}