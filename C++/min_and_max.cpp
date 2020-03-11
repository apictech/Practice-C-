#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(t;t>0;t--)
  {
    int n;
    cin>>n;
    int arr[n];
    int min, max, i=0;

        for(i=0;i<n;i++)
        {
        cin>>arr[i];
        }

    min=arr[0];
    max = arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
            
            if(arr[i]>max){
                max=arr[i];
            }
            
        }
        cout<<min<<" "<<max<<endl;
        i=0;
  }
  return 0;
} 