#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if((x<y && x>z) || (x>y && x<z))
        cout<<"\n"<<x<<"\n";
    
    else if((y<x && y>z) || (y>x && y<z))
        cout<<"\n"<<y<<"\n";
    
    else
        cout<<"\n"<<z<<"\n";
    

    return 0;
}