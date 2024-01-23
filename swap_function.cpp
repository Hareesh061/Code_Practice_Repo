#include<iostream>
using namespace std;

int max(int x,int y){
    if(x>y)return x;
    else return y;

}

int swap(int &x,int &y){
   x=x+y;
   y=x-y;
   x=x-y;

}


int main(){
    int ch,a,b;
    cin>>ch;
    cin>>a>>b;

    switch(ch){
        case 1:
        int r;
            r= max(a,b);
            cout<<r;
            break;
        
        case 2:
            swap(a,b);
            cout<<a<<" "<<b;
            break;


    }
}