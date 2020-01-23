#include<iostream>
using namespace std;
int main(){
    int t, l, r;
    cin>>t;
    for(t;t>0;t--){
        cin>>l>>r;
        if(l == r)
            cout<<l<<"\n";
        else
            cout<<1<<"\n";   
    }
    cout<<"\n";
    return 0;
}