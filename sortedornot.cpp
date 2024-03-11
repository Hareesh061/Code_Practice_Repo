// the given array is sorted or not 


//brute force approoch

bool issorted(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                return false;
            }
        }
    }
    return true;
}



//optimal aprooch

bool issorted(int arr[],int n){

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}