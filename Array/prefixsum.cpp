#include<bits/stdc++.h>
using namespace std;
// int get_sum(int arr[],int l,int r) //naive solution 
// {
//     int sum=0;
//     for(int i=l;i<=r;i++)
//     {
//         sum=sum+arr[i];
//     }
//     return sum;
// }
int get_sum(int ps[],int l,int r)
{
    if(l==0)
    return ps[r];
    else
    return ps[r]-ps[l-1];
}
int main()
{
   int arr[]={3,5,4,6,7};
   int n=sizeof(arr)/sizeof(arr[0]);
   int ps[n];
   ps[0]=arr[0];
   for(int i=0;i<n;i++)
   {
      ps[i]=ps[i-1]+arr[i];
   }
   cout<<get_sum(ps,1,3);
   return 0;
    
}