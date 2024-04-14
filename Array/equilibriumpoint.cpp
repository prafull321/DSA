#include<bits/stdc++.h>
using namespace std;
// bool eqp_point(int arr[],int n) // naive solution
// {
//     for(int i=0;i<n;i++)
//     {
//         int lsum=0;
//         int rsum=0;
//         for(int j=0;j<i;j++)
//         {
//             lsum+=arr[j];
//         }
//         for(int k=i+1;k<n;k++)
//         {
//             rsum+=arr[k];
//         }
//         if(lsum==rsum)
//         {
//             return true;
//         }
//     }
//     return false;
// }
bool eqp_point(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res+arr[i];
    }
    int lsum=0;
    for(int j=0;j<n;j++)
    {
        res-=arr[j];
        if(lsum==res)
        {
            return true;
        }
        lsum+=arr[j];
    }
    return false;
}
int main()
{
    int Arr[]={3,4,8,-9,9,7};
    int n=sizeof(Arr)/sizeof(Arr[0]);
    cout<<eqp_point(Arr,n);
}