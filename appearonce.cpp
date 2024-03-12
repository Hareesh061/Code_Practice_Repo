// find the number that appears once


#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[5]={1,2,4,1,2};

   int ans=0;

   for(int i=0;i<5;i++){
    ans^=arr[i];



   }
   cout<<ans;


}