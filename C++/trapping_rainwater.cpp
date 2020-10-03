/*
This is the famous Trapping Rain Water problem which is asked in many interviews.
*/


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
    int left_max = arr[0], right_max = arr[n-1];

    for(int i=1; i<n-1; i++){
        for(int j=i; j>=0; j--){
            if(arr[j] > left_max)
                left_max = arr[j];
            cout<<left_max;
        }
        for(int j=i; j<n; j++){
            if(arr[j] > right_max)
                right_max = arr[j];
            // cout<<right_max;
        }

        water += min(left_max, right_max) - arr[i];
    }

    // cout<<water;
}

    // int left[n], right[n], water = 0;
    // left[0] = arr[0];
    // for(int i=1; i<n; i++){
    //     if(arr[i]>left[i-1])
    //         left[i] = arr[i];
    //     else
    //         left[i] = left[i-1];
    // }

    // for(int i=n-1; i>=0; i--){
    //     if(arr[i]>right[i+1])
    //         right[i] = arr[i];
    //     else
    //         right[i] = right[i+1];
    // }

    // for(int i=1; i<n-1; i++){
    //     water += min(left[i],right[i]) - arr[i];
    // }

    // cout<<water;
// }

