//  #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(t;t>0;t--){
//         int n, k,temp;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<k;i++){
//             int j;
//             temp = arr[n-1];
//             // cout<<"temp is:-"<<temp<<endl;
//             for(j=n-1;j>0;j--){
//                 // cout<<"arr[j] is:- "<<arr[j]<<endl;
//                 // cout<<"arr[j-1] is:- "<<arr[j-1]<<endl;
//                 arr[j]=arr[j-1];
//                 // cout<<"arr[j] is:- "<<arr[j]<<endl;
//                 // cout<<"arr[j-1] is:- "<<arr[j-1]<<endl;
//             }
//             arr[j]=temp;
//             // cout<<"temp is:-"<<temp<<endl;
//             // cout<<"arr[j] is:- "<<arr[j]<<endl;
//         }
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void reverseArray(int arr[], int start, int end) 
// { 
//     while (start < end) 
//     { 
//         swap(arr[start], arr[end]); 
//         start++; 
//         end--; 
//     } 
// } 

// void rightRotate(int arr[], int d, int n) 
// { 
//     reverseArray(arr, 0, n-1); 
//     reverseArray(arr, 0, d-1); 
//     reverseArray(arr, d, n-1); 
// }

// void printArray(int arr[], int size) 
// { 
//     for (int i = 0; i < size; i++) 
//         cout << arr[i] << " "; 
// }

// int main(){
//     int t;
//     cin>>t;
//     for(t;t>0;t--){
//         int n, d;
//         cin>>n>>d;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         rightRotate(arr, d, n);
//         printArray(arr, n);
//     }
//     cout<<endl;
// }

#include<iostream>
using namespace std;
void rightRotate(int arr[], int start, int end)
{
    while(start<=end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        rightRotate(arr,0,n-k-1);
        rightRotate(arr,n-k,n-1);
        rightRotate(arr,0,n-1);
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}