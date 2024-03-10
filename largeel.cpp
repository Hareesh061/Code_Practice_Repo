//finding max element in an array



// #include<bits/stdc++.h>
// using namespace std;

// int maxel(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }


// int main(){
//     vector<int> arr={1,4,2,7,3};

//     cout<<maxel(arr);
// }



#include<bits/stdc++.h>
using namespace std;

int maxel(int arr[],int n){
   
 int max=arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={3,6,4,2,1};
    int n=5;

    int max=maxel(arr,n);

    cout<<max;
    return 0;
}