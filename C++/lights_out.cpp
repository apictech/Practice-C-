#include<iostream>
using namespace std;
int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=1;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2==0){
                arr[i-1][j]=1;
                arr[i+1][j]=1;
                arr[i][j-1]=1;
                arr[i][j+1]=1;
                cout<<arr[i][j];
            }
            else{
                arr[i-1][j]=0;
                arr[i+1][j]=0;
                arr[i][j-1]=0;
                arr[i][j+1]=0;
                
                cout<<arr[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
    }

    return 0;
}