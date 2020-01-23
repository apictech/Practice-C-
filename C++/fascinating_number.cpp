#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        int num1, num2;
        cin>>num1;
        int arr[4];
        num2=num1+1;
        int temp = num1+1;
        while(num2 >= 1000){
            int i=0, sum=0;
            while(num2>0){
                int rem = num2 % 10;
                arr[i] = rem;
                num2 = num2/10;
                i++;
            }
            for(int i=0;i<3;i++){
                for(int j=i+1;j<4;j++){
                    if(arr[i]==arr[j])
                        sum++;
                }
            }
            if(sum==0){
                cout<<temp<<endl;
                break;
            }
            temp++;
            num2=temp;
        }
    }
    return 0;
}