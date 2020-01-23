#include <bits/stdc++.h> 
using namespace std; 
  
int multiplyBy2(int n) 
{ 
    int rem, value; 
  
    // Find the last digit or remainder 
    rem = n % 10; 
    switch (rem) { 
  
    // If the last digit is 0 
    case 0: 
        value = 0; 
        break; 
  
    // If the last digit is 5 
    case 5: 
        value = 1; 
        break; 
  
    // If last digit is other  
    // than 0 and 5.  
    default: 
        value = -1; 
    } 
  
    return value; 
} 
  
// Driver code 
int main() 
{ 
  
    int n, t;
    cin>>t;
    for(t;t>0;t--){ 
        cin>>n;
    cout << multiplyBy2(n) << endl;  
    }
  return 0; 
} 