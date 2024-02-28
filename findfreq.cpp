//find the frequency of given array 



//brout force apooch


#include<bits/stdc++.h>
using namespace std;

// void find(int arr[],int n){

//     vector<bool> visited(n,false);

//     for(int i=0;i<n;i++){
//         if(visited[i]==true){
//             continue;
//         }


//   int cont=1;
//         for(int j=i+1;j<n;j++){
          

//             if(arr[i]==arr[j]){
//               visited[j]= true;
//               cont++;
//             }
               
//         }
//   cout<<arr[i]<<" "<<cont<<endl;
//     }
   



// }

int main(){
    
    int arr[]={2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    find(arr,n);

    return 0;


}



// optimised aprroch using hashmap 


void find(int arr[],int n){

unordered_map<int,int> map;

for(int i=0;i<n;i++){
    map[arr[i]]++;
}

for(auto x: map){
    cout<<x.first<<" "<<x.second;
}

}




