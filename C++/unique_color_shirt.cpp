                                                            /* Not Done Yet */

#include <bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int n, int x) 
{ 
   // Search x in array 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   // If x found in array 
   if (i < n) 
   { 
     // reduce size of array and move all 
     // elements on space ahead 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  for(int i=0;i<n;i++){
        int count=0, temp=arr[i];
        for(int j=0;j<n;j++){
            if(arr[j]==temp)
                count+=1;
        }
        if(count>1)
            deleteElement(arr, n, arr[i]);
        n--;
  }
  int count1=0;
  for(int i=0;i<n;i++){
      count1+=1;
  }
  count1-=1;
  cout<<count1;
  
  return 0;
}