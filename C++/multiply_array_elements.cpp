#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    //cout<<"test is:- "<<t<<endl;
    for(t;t>0;t--){
        int n, res=1;
        cin>>n;
        //cout<<"size is:- "<<n<<endl;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            //cout<<"arr[i] is:- "<<arr[i]<<endl;
        }
        for(int i=0;i<=n-1;i++){
                res = arr[i] * res;
                //cout<<"result is:- "<<res<<endl;
        }
        cout<<res<<endl;
    }
}