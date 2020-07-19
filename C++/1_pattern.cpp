#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=5;i++){
        cout<<" ";
        for(j=1;j<=i;j++){
            cout<<n<<" ";
        }
        cout<<"\n";
    }
    return 0;
}