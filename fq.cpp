// finding the max and min frequesncy element 

#include<iostream>
#include<vector>
using namespace std;

void findfreq(int arr[],int n){

    vector<bool> visited(n,false);
    int maxf=0,minf=n;
    int maxEL=0,minEL=0;
    
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }


        int count =1;

        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
       
        if(count>maxf){
            maxEL=arr[i];
            maxf=count;
        }

        if(count<minf){
            minEL=arr[i];
            minf=count;
        }
    }
    cout<<maxEL<<endl<<minEL;


}


int main(){
    int n;
    cin>>n;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    findfreq(arr,n);

    return 0;
}