# include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,4,6,5,5};
    int target=3,i,j;
    int count=0;

    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<i<<" "<<j;
            }
        }
    }                                        



    return 0;
}







