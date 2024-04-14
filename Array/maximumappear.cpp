#include<bits/stdc++.h>
using namespace std;
int max_app(int L[],int R[],int n)
{
    int freq[100]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=L[i];j<=R[i];j++)
        {
            freq[j]+=1;
        }
    }
     int res=0;
     for(int i=1;i<100;i++)
     {
     if(freq[i]>freq[res])
     {
        res=i;
     }
     }
    return res;
}
int main()
{
    int L[]={1,2,4};
    int R[]={4,5,7};
    int n=sizeof(L)/sizeof(L[0]);
    cout<<max_app(L,R,n);

}