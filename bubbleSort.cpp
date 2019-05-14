#include<iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    int i=0, j=0;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i= 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int arr[]={6,2,8,4,12,10,18,14,16,20};
    int l = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, l);
    return 0;

}