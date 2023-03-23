// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int insertionInVector(vector<int> v, int size){
//     for(int i = 0; i < size; i++){
//         int input;
//         cin>>input;
//         v.push_back(input);
//     }
//     return 0;
// }

// int handling_query(vector<int> v[], int index1, int index2){
//     return v[index1].at(index2);
// }

// int main() {
//     cout<<"variable"<<endl;
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n, q;
//     cin>>n>>q;
//     int i;

//     vector<int> a[n];

//     for(int j = 0; j < n; j++){

//         cin>>i;
//         insertionInVector(a[j], i);

//     }

//     int arr[q];

//     for(int j = 0; j < q; j++){
//         int index1, index2;
//         cin>>index1>>index2;
//         arr[j] = handling_query(a, index1, index2);
//     }

//     for(int j = 0; j < q; j++){
//         cout<<arr[j]<<endl;
//     }

//     return 0;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int insertionInVector(vector v, int size){
    
// }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x, y, s = 0;
    cin>>x>>y;

    int* arr[x];

    while(x--){
        int n;
        cin>>n;

        arr[s] = new int[n];

        for(int i = 0; i < n; i++)
            cin>>arr[s][i];
        s++;
    }

    while(y--){
        int a, b;
        cin>>a>>b;

        cout<<arr[a][b]<<endl;
    }
    
    return 0;
}
