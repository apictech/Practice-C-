#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        int i, n;
        cin>>n;
        int A[n], index = -1;  //,one = -1
        for(int i=0;i<n;i++){
            cin>>A[i];
        }

        // for(int i=0;i<n;i++){
        //     if(A[i]==0){
        //         one = -1;
        //     }
        // }
        // cout<<one<<endl;

        for(int i=n-1;i>=0;i--){
            if(A[i]==1){
                index = i;
                break;
            }
        }
        // if(index>=0){
            cout<<index<<endl;
            index = 0;
        // }
        // else
        //     cout<<one<<endl;
    }
    return 0;
}