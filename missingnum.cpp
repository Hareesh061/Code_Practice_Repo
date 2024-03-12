//find the missing number in an array

#include<bits/stdc++.h>
using namespace std;


int missingnum(vector<int> &arr,int n){
   
  for(int i=1;i<=n;i++){
    int flag=0;

    for(int j=0;j<n-1;j++){
       if(arr[j]==i){
        flag=1;
        break;
       }
    }
    if(flag==0) return i;

  }
  return -1;
}

int main(){

vector<int> arr{1,3,4,5};
int n=arr.size()+1;

int ans=missingnum(arr,n);
cout<<ans;
}


// optimul aproch

// sum=(n*(n+1))/2;

// missing number = sum- arr_sum;