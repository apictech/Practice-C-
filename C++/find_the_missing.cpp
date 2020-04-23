#include<bits/stdc++.h>
using namespace std;

long long int getMissingNo(long long int a[], long long int n) 
{ 
    long long int total = (n + 1) * (n + 2) / 2; 
    long long int sum=0;
    for (long long int i = 0; i < n; i++) 
        sum += a[i];
        total = total - sum; 
    cout<<total<<endl;
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        long long int n;
        cin>>n;
        n=n-1;
        long long int arr[n];
        
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int result=getMissingNo(arr, n);
    }
    return 0;
}