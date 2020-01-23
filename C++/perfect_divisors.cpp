#include<iostream>
using namespace std;
int main(){
    int t, n, i, j;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n;
        int sum=0;
        for(i=1;i<n;i++){
            if(n%i == 0){
                sum = sum + i;
            }
        }
        
        if(sum == n)
            cout<<"true\n";
        else
            cout<<"false\n";
    }
    return 0;
}