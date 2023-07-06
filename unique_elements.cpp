#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int k = x[0];
	for(int i=1;i<n;i++)
	{
		k = k ^ x[i];
	}
	cout<<k<<endl;

}

// Method 2 without using array
//int main()
//{
//	int n;
//	cin>>n;
//	int k = 0;
//	for(int i=0;i<n;i++)
//	{
//		int num;
//		cin>>num;
//		k = k ^ num;
//	}
//	cout<<k<<endl;
//}

