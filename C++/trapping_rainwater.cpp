/*
This is the famous Trapping Rain Water problem which is asked in many interviews.
*/

// Brute-force Approach.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int water = 0;

//     for(int i=0; i < n ; i++){
//         int left_max = 0, right_max=0;
        
//         for(int j = i; j > 0; j--){
//             left_max = max(left_max, arr[j]);
//         }

//         for(int j = i; j < n; j++){
//             right_max = max(right_max, arr[j]);
//         }

//         water += min(left_max, right_max) - arr[i];
//     }

//     cout<<water;

// }

// Optimizing Approach.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int left_max[n], right_max[n], water=0;
    left_max[0] = arr[0];

    for(int i = 1; i < n; i++){
        left_max[i] = max(arr[i], left_max[i-1]);
    }

    right_max[n-1] = arr[n-1];

    for (int i = n-2; i >= 0; i--){
        right_max[i] = max(arr[i], right_max[i+1]);
    }

    for(int i = 1; i < n-1; i++){
        water += min(left_max[i], right_max[i]) - arr[i];
    }

    cout<<water<<endl;
}


/*

Sample test case:-

Input:- 

10
0 2 3 1 3 4 2 1 3 5

Output:-

8

*/
