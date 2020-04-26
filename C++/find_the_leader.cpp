#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxRight=arr[n-1];
        cout<<arr[n-1]<<" ";
        for(int i=n-2;i>=0;i--){
            if(maxRight <= arr[i]){
                maxRight = arr[i];
                cout<<maxRight<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}