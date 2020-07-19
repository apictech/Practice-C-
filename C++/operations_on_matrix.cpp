#include<bits/stdc++.h>

using namespace std;

int main(){
    int m, n, o;
    cin>>m>>n;
    o = m;
    int arr1[m][n], arr2[m][n], arr3[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }


// Addition of Matrix.

    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr3[i][j] = arr1[i][j] + arr2[i][j];
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }

// Multiplication of Matrix.

    int i, j, k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int sum = 0;
            for(k=0;k<o;k++){
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sum;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
}