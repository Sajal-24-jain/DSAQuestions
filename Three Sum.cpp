# include <iostream>
using namespace std;
int main()
{
    int arr[]={1,5,4,2,6,2,8,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    int tar=10;
    
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
         for(k=j+1;k<n;k++)
         {
            if(arr[i]+arr[j]+arr[k]==tar)
            {
                cout<<i<<j<<k<<endl;
            }
         }
       }
    }
}