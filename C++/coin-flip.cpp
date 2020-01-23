#include<iostream>
using namespace std;
int main(){
    int g, t;
    cin>>t;
    for(t;t>0;t--){
        cin>>g;
        for(g;g>0;g--){
            int i, n, q;
            cin>>i>>n>>q;
            int value = n/2;
            if(i==q)
                cout<<value<<endl;
            else
                cout<<(n-value)<<endl;
        }
    }
    return 0;
}