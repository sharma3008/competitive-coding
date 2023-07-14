#include<bits/stdc++.h>
using namespace std;void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int mergeele(int arr[], int lb, int mid, int ub)
{
  int temp[ub-lb+1];
  int lb1 = lb;
  int ub1 = mid;
  int lb2 = mid+1;
  int ub2 = ub;
  int k = 0;
  while(lb1<=ub1 && lb2 <= ub2)
  {
      if(arr[lb1]<=arr[lb2])
      {
          temp[k++] = arr[lb1++];
      }
      else
        temp[k++] = arr[lb2++];
  }
  while(lb1<=ub1)
    temp[k++] = arr[lb1++];
  while(lb2<=ub2)
    temp[k++] = arr[lb2++];
 for(int i=0;i<ub-lb+1;i++)
    arr[lb+i] = temp[i];
}
int mergesort(int arr[],int lb, int ub)
{
    if(lb == ub)
        return 0;
    else
    {

        int mid = (lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        mergeele(arr,lb,mid,ub);
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    mergesort(arr,0,n-1);
    printarr(arr,n);
}
