#include<iostream>
using namespace std;
int main(){
    int N, ti, ci, j, i, count=0;
    cin>>N;
    for ( j= 1; j <= N; j++)
    {
        cin>>ti>>ci;
            if(ci-ti >= 2){
                count++;
            }
    }
    cout<<count;

    return 0;  
}