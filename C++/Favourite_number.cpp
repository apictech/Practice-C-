#include<iostream>
using namespace std;
int main(){
    int t, n, count=0, rem;
    cin>>t; //Enter number testcases.

    for(int i=t;t>0;t--){      
        cin>>n;                             //Enter the number you want to test.
        while(n>0){                         //In this loop our all the testcases will processed.
            rem= n%10;                      //Here we access last digit of the number to compare.
            if(rem == 5)                    //Here we are comparing the last digit.
                count = count+1;            //If our comparing is successful than the count will increase by 1.
            n= n/10;                        //Here we are deleting the last digit.
        }
        cout<<count;
        count = 0;
    }
    
    return 0;
}