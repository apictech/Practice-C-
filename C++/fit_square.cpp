#include<iostream>
using namespace std;
int main(){
    int t, M, N, res;
    cin>>t;
    for(t;t>0;t--){
        cin>>M>>N;
        if(M<=N && N<=16){
          if(M%2==0)
              res = (M/2)*N;
          else if(N%2==0)
              res = (N/2)*M;
          else
              res = (M*N-1)/2;
          cout<<res<<"\n";
        }
    }
    return 0;
}