#include<iostream>
using namespace std;
void shellSort(int a[], int n)
{
    int i, j, k, temp;
    for(i=n/2; i>0; i=i/2)
    {
        for(j=i; j<n; j++)
        {
            for(k=j-i;k>=0; k=k-i)
            {
                if(a[k+i]>=a[k])
                {
                    break;
                }
                else
                {
                    temp=a[k];
                    a[k]=a[k+i];
                    a[k+i]=temp;
                }
                
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int a[]={3,6,12,9,18,15};
    int l=sizeof(a)/sizeof(a[0]);
    shellSort(a,l);
   return 0;
}