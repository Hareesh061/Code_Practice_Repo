//search the element index


#include<bits/stdc++.h>

using namespace std;


int main(){
    int arr[5]={3,2,5,7,8};

    int n=5;
    int num=3;

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<i;
        }
        else{
            continue;
        }
    }
    return 0;
}