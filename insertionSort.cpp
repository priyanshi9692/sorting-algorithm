#include<iostream>
using namespace std;
void insertionSort(int a[], int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;

    }
}
void printSort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    
    }
    cout<<"\n";
}
int main()
{
    int arr[]={23,20,19,15,25, 21, 24, 22};
    int l=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, l);
    printSort(arr,l);
    return 0;

}