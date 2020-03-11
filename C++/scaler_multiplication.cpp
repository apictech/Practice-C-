#include<iostream>
using namespace std;
int main(){
    int i, m, k, n, j,res;

    cin>>m>>n>>k;
    
    int arr[m][n];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            res = arr[i][j]*k;
            cout<<res<<" ";
        }
        cout<<endl;
    }
}