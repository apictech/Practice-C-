/*
This is the famous Trapping Rain Water problem which is asked in many interviews.
*/

// Brute-force Approach.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int water = 0;

    for(int i=0; i < n ; i++){
        int left_max = 0, right_max=0;
        
        for(int j = i; j > 0; j--){
            left_max = max(left_max, arr[j]);
        }

        for(int j = i; j < n; j++){
            right_max = max(right_max, arr[j]);
        }

        water += min(left_max, right_max) - arr[i];
    }

    cout<<water;

}