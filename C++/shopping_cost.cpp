#include<iostream>
using namespace std;
int main(){
    int t;
    float quat, price, disc;
    cin>>t;
    for(t;t>0;t--){
        cin>>quat;
        cout<<"  ";
        cin>>price;
        price=price*quat;
        if(quat>100){
            price =  price - price/100 * 20;
        }
        printf("%.2f",price);
    }
}