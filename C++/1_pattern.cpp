#include<iostream>
using namespace std;
int main(){
    // variable declared..
    int i,k,n;
    // take input n ..
    cin>>n;
    // use loop for counting ...
    for(i=1;i<=5;i++){
        cout<<" ";
        for(k=1;k<=i;k++){
            cout<<n<<" ";
        }
    }
    return 0;
}
