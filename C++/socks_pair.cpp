// Find the number of pairs of socks to be remove from the drawer to get a matching pair.
/* Input format
The first line contains the number of test cases 
T
. 
Next 
T
 lines contain an integer 
N
 which indicates the total pairs of socks present in the drawer.

Output format
Print the number of draws PrepBuddy will have to make in the worst case.

Constraints
1<=T<=1000

1<=N<10**6

Time Limit
1 ​second

Example
Input                   Output
2

1                            3
2                            2

Sample Test case Explanation
In the first test case, there is just 1 pair of socks i.e 2 socks in her drawer,
 so she has to remove both to get a pair, therefore the output is 2.
*/

#include<iostream>
using namespace std;
int main(){
    int i, t, n, count;
    cin>>t;
    for(i=t;t>0;t--){
        cin>>n;
        count=n+1;
        cout<<count<<endl;
    }
    
    return 0;

}