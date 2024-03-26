// insert the value at first position of the linked list


#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode * next;
//constructor
    ListNode(int x){
        val= x;
        next= NULL;
    }
};

//print the nodes
void printList(ListNode * head){
    ListNode * curr= head;
    for(; curr!=NULL; curr=curr->next)

        cout<< curr -> val<< "-->";
        cout<<"NULL"<<endl;
    

}

//insert the node at beginning 

ListNode * InsertFirst(int value,ListNode * head){

ListNode * newnode = new ListNode(value);

newnode->next = head;

head = newnode;

return head;

}


int main(){

    ListNode * head = NULL;


    head = InsertFirst(40,head);
     head = InsertFirst(30,head);
      head = InsertFirst(20,head);
       head = InsertFirst(10,head);
   cout<<"before inserting at first linked list"<<endl;
       printList(head);

       head = InsertFirst(0,head);

cout<<"after the inserting values at first"<<endl;
       printList(head);

       return 0;



}