#include<iostream>
using namespace std;
void swapNum(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void selectionSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            swapNum(a[i], a[min]);
        }
        
    }
}


int main()
{
    int arr[]={4,60,15,10,2};
    selectionSort(arr, 5);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}