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
        int count = 0;
        for(int i=0;i<n;i++){
            if( i == 0 && arr[i]>arr[i+1] || i>0 && i<n-1 && arr[i]>arr[i-1] && arr[i]>arr[i+1] || i == n-1 && arr[n-1]>arr[n-2] ){
                cout<<i<<" ";
                count++;
            }
        }
        if(count == 0)
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}