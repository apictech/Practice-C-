#include<iostream>
using namespace std;
int calc_digit(long long n){
    long long digit=0;
    for(long long i=1;i<=n;i*=10){
        // cout<<"digit is:- "<<digit<<endl;
        // cout<<"i is:- "<<i<<endl;
        // cout<<"n is:- "<<n<<endl;
        digit=digit+(n-i+1);
    }
    cout<<digit<<endl;
    return digit;
}
int main(){
    int t;
    long long n;
    cin>>t;
    for(t;t>0;t--){
        cin>>n;
        calc_digit(n);
    }
    return 0;
}