#include<iostream>
using namespace std;

void swapNum(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}


int partition(int a[], int low, int high)
{

    int pivot=a[high];
    int i=low-1;
   

    for(int j=low; j<=high-1; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swapNum(a[i],a[j]);
        }
        
    }
    swapNum(a[i+1],a[high]);
    return (i+1);
}
void quickSort(int a[], int low, int high)
{
    if(low<high)
    {

        int pi=partition(a, low, high);
        quickSort(a, low, pi-1);
       quickSort(a, pi+1, high);
        
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
    int arr[]={20,24,16,12,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printSort(arr, n);
   
    return 0;
}