#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    char ch;
    cin>>ch;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=i*2;j<5*2;j++){
            cout<<"  ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}