/*
Toppers
In a class, we have three toppers Hari, Ram, and Krishna. The students of the class stand in a row where Hari, Ram, and Krishna are the first 3 students.
The teacher asks every student of the class to choose a number randomly. All the students except the toppers cheat, the students choose their number by adding the number chosen by the previous 
3 students.You are given the number chosen by Hari, Ram, and Krishna. You have to find all the numbers chosen by n students.

Input format
First line contains integer t ,denoting number of testcases. Next t lines, each contains four integers a, b, c, n.

Output format
Print t number of lines ,where each line contains n integers.

Constraints:
1<=t<=100

3<=n<=201<=a,b,c<=10

Time Limit
1 second

Example
Input                               Output
                                    
2                                   1 2 3 6 11
1 2 3 5                             9 4 3 16 23 42 81
9 4 3 7                                   

Sample test case explanation:-
In the first test case first 3 scores are 1 2 and 3, therefore 4rth score is 1+2+3=6 and fifth score is 6+3+2=11.
*/

#include<iostream>
using namespace std;
int main(){
    int t, i, x, y, z, sum, n;
    cin>>t;
    for(i=t;t>0;t--){
        cin>>x>>y>>z>>n;
        n=n-3;
        cout<<x<<" "<<y<<" "<<z<<" ";
        for(n;n>0;n--){
            sum = x+y+z;
            cout<<sum<<" ";
            x=y;
            y=z;
            z=sum;
            
        }
        cout<<"\n";
    }
    return 0;
}