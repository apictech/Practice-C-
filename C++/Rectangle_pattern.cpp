// Simple Rectangle
/* Ex:- * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int row, col;
//     cin>>row>>col;

//     for (int i = 0; i < row; i++)
//     {
//         for(int j=0; j<col; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// Hollow Rectangle
/* Ex:- 
        * * * * 
        *     *
        *     *
        *     *
        * * * *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int row, col;
//     cin>>row>>col;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(i == 0 || i == row-1 || j == 0 || j == col-1){
//                 cout<<"* ";
//             }else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Inverted Half Pyramid

/* Ex:- * * * * * 
        * * * *
        * * * 
        * *
        *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=n; i>0; i--){
//         for(int j=i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Half Pyramid After 180 degree rotation.

/* Ex:- 
        * 
      * *
    * * *
  * * * *
* * * * *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(j<n-i-1){
//                 cout<<"  ";
//             }else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Pyramid

/* Ex:- 

    *
   * *
  * * *
 * * * *
* * * * *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(j<n-i-1){
//                 cout<<" ";
//             }else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Half pyramid using numbers

/* Ex:- 
        1 
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5 

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;

//         for(int i=1; i<=n; i++){
//                 for(int j=1;j<=i; j++){
//                         cout<<i<<" ";
//                 }
//                 cout<<endl; 
//         }
// }

// Floyd's Triangle

/* Ex:-
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;
//         int count = 1;
//         for (int i = 1; i <= n; i++){
//                 for(int j = 1; j<=i; j++){
//                         cout<<count<<" ";
//                         count++;
//                 }
//                 cout<<endl;
//         }    
// }

// Butterfly Pattern

/* Ex:-
*                 * 
* *             * * 
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * * 
* *             * *
*                 *
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;

//         for(int i=1; i<=n; i++){
//                 for(int j=1; j<=i; j++){
//                         cout<<"* ";
//                 }
//                 int space = 2*n - 2*i;
//                 for(int j=1; j<=space; j++){
//                         cout<<"  ";
//                 }
//                 for(int j=1; j<=i; j++){
//                         cout<<"* ";
//                 }
//                 cout<<endl;
//         }

//         for(int i=n; i>=1; i--){
//                 for(int j=1; j<=i; j++){
//                         cout<<"* ";
//                 }
//                 int space = 2*n - 2*i;
//                 for(int j=1; j<=space; j++){
//                         cout<<"  ";
//                 }
//                 for(int j=1; j<=i; j++){
//                         cout<<"* ";
//                 }
//                 cout<<endl;
//         }
// }

// Inverted pattern

/* Ex:- 
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;

//         for(int i=n; i>0; i--){
//                 for(int j=1; j<=i; j++){
//                         cout<<j<<" ";
//                 }
//                 cout<<endl;
//         }
// }

// 0-1 Pattern

/* Ex:- 
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;

//         for(int i=1; i<=n; i++){
//                 for(int j=1; j<=i; j++){
//                         if((i+j) % 2 == 0){
//                                 cout<<"1 ";
//                         }else
//                                 cout<<"0 ";
//                 }
//                 cout<<endl;
//         }
// }

// Rhombus Pattern

/* Ex:-

     * * * * * *
    * * * * * *
   * * * * * *
  * * * * * *
 * * * * * *
* * * * * *
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin>>n;

//         for(int i=1; i<=n; i++){
//                 for(int j=1; j<=n-i; j++){
//                         cout<<" ";
//                 }
//                 for(int j=1; j<=n; j++){
//                         cout<<"* ";
//                 }
//                 cout<<endl;
//         }
// }

// Pyramid With numbers

/* Ex:- 
    1 
   1 2 
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
// 		for(int j=1; j<=i; j++){
// 			cout<<j<<" ";
// 		}
//         cout<<endl;
//     }
// }

// Palindromic Number Pattern

/* Ex:- 
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;

// 	for(int i=1; i<=n; i++){
// 		int j;
// 		for(j=1; j<=n-i; j++)
// 			cout<<"  ";
		
// 		int k = i;

// 		for(; j<=n; j++){
// 			cout<<k--<<" ";
// 		}

// 		k=2;
// 		for(; j<=n+i-1; j++){
// 			cout<<k++<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// Star Pattern

/* Ex:- 
        * 
      * * * 
    * * * * *
  * * * * * * *
* * * * * * * * * 
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;

// 	for(int i=1; i<=n; i++){
// 		for(int j=1; j<=n-i; j++){
// 			cout<<"  ";
// 		}
// 		for(int j=1; j<=2*i-1; j++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// 	for(int i=n; i>=1; i--){
// 		for(int j=1; j<=n-i; j++){
// 			cout<<"  ";
// 		}
// 		for(int j=1; j<=2*i-1; j++){
// 			cout<<"* ";
// 		}
// 		cout<<endl;
// 	}
// }

// Zig-Zag Pattern

/* Ex:- 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=1; i<=3; i++){
		for(int j=1; j<=n; j++){
			if(((i+j)%4==0) || (i==2 && j%4==0)){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}