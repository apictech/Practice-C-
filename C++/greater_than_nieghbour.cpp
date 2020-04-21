#include<bits/stdc++.h>
using namespace std;

int checkbig(int arr[], int n){
    if(arr[0]>arr[1])
        cout<<0;
    if(arr[n-1]>arr[n-2]){
        cout<<n-1;
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]>arr[i] && arr[i+1]>arr[i])
            cout<<i;
        else
            continue;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        int n;
        cin>>n;
        int arr[n];
        for(n;n>0;n--){
            cin>>n;
        }
        checkbig(arr,n);
    }
    return 0;
}