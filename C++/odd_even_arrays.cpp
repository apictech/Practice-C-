#include<iostream>
using namespace std;
int main(){
    int n, k=0, z=0;
    cin>>n;
    int arr[n], even[n], odd[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[k] = arr[i];
            //cout<<"even[i] is:- "<<even[k]<<" "<<endl;
            k++;
        }
        else{
            odd[z] = arr[i];
            //cout<<"odd[i] is:- "<<odd[i]<<" "<<endl;
            z++;
        }
    }
    for(int i=0;i<k;i++){
            cout<<even[i]<<" ";
        }
    cout<<endl;
    for(int i=0;i<z;i++){
        cout<<odd[i]<<" ";
    }
        cout<<endl;
    return 0;
}