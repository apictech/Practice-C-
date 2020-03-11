#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long positive=0, negative=0;
    long total_positive=0, total_negative=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive++;
        }
        else{
            swap(positive,negative);
            negative++;
        }
        total_positive += positive;
        total_negative += negative;
    }
    cout<<total_negative<<" "<<total_positive;
    return 0;
}