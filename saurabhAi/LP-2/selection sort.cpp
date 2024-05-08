#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  cout<<"Enter the how many element we want to add in the array";
  cin>>n;
  cout<<"\n Enter the "<<n<<"element";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  for(int i=0;i<n-1;i++)
  {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[min]>arr[j])
        {
           min=j;
        }
    }
    if(min!=i)
    {
      int temp=arr[i];
      arr[i]=arr[min];
      arr[min]=temp;
    }
  }

  cout<<("After the sorting the array is");
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"\t";
  }

}
