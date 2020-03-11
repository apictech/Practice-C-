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
    int index;

        for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        }

    int min=arr[0];
        for(int i=0;i<n;i++)
        {
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
        }
        cout<<index<<endl;
        index=0;
  }
  return 0;
} 