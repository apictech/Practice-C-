#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t>0){
        cin>>n;

        if((n%400 == 0) || (n%4 == 0 && n%100 != 0)){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        t--;
    } 
    return 0;
}