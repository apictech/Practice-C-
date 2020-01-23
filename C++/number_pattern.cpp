#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=5;i>=1;i--){
        cout<<" ";
        for(j=1;j<=i;j++){
           cout<<j<<" ";
        }
        cout<<"\n";
    }
}
