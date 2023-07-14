#include <bits/stdc++.h>
using namespace std;
void selection_sort()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int indx = i;
        for(int j=i+1;j<n;j++)
        {

            if(arr[indx]>arr[j])
                indx = j;
        }
        int temp = arr[i];
        arr[i] = arr[indx];
        arr[indx] = temp;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void insertion_sort()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
void bubble_sort()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{

    void bubble_sort(), selection_sort(),insetion_sort();
	int i;
	while(1)
	{
	    cout<<endl;
		cout<<"select from the following options"<<endl;
		cout<<"1 bubble sort"<<endl;
		cout<<"2 selection sort"<<endl;
		cout<<"3 insertion sort"<<endl;
		cout<<"4 Exit"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				bubble_sort();
				break;
			case 2:
				selection_sort();
				break;
			case 3:
				insertion_sort();
				break;
			case 4:
				exit(0);
		}
	}


}
