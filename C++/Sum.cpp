// Take two inputs from user and print the sum as output.
// input is 4 and 5 then output is 9.

#include <iostream>
using namespace std;
int main(){
    
    int t;
    cout<<"Enter value that how many time you add numbers:- ";
    cin>>t;
    while(t != 0)
    {   
        int a,b,c;
        cout<<"Enter values of a and b:- ";
        cin>>a >>b;
        int c = a + b;
        cout<<c;
        cout<<"\n";
        t=t-1;
    }
    return 0;

}
