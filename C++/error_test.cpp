#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, i=1, x=1;
    cin>>n;
    for(i=1;i<n;i++){
        x=x*i;
    }
    cout<<x;
    return 0;
}