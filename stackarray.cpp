// create stack using array 


#include<bits/stdc++.h>
using namespace std;

class Stack{
 
 int size;
 int top;
 int * arr;

 public:

  Stack(){
    size=1000;
    top=-1;
    arr = new int[size];
  }

void push(int x){
    top++;
    arr[top]=x;
}

int pop(){
    int x= arr[top];
    top--;
    return x;

}

int Top(){
    return arr[top];

}

int Size(){
    return top+1;

}


};


int main(){

    Stack s;

    s.push(3);
    s.push(2);
    s.push(9);

    cout<<s.Top()<<endl;

    cout<<s.Size()<<endl;

   cout<< s.pop()<<endl;

    cout<<s.Top()<<endl;

    return 0;
}