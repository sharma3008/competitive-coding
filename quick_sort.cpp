#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int part(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<=high;j++)
    {
        if(arr[j]<pivot)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;

        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}
int qsort(int arr[], int low, int high)
{
    if (low < high) {
        int pos = part(arr, low, high);
        qsort(arr, low, pos - 1);
        qsort(arr, pos + 1, high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    part(arr,0,n-1);
    printarr(arr,n);
}
