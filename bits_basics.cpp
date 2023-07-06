#include <bits/stdc++.h>
using namespace std;
void generate_ith_jth_bitareset()
{
	
	int i,j;
	cin>>i>>j;
	int k;
	// consider number 1 and right shift the number by i places so that ith position is set same with j now perform or operation
	k = (1<<i)|(1<<j);
	cout<<k<<endl;
	
}
void numberOfsetbits()
{
	int n;
	cin>>n;
	int c = 0;
	// when we perform the operation ( n&(n-1) ) the least significant setbit is unset perform this action till number turns to 0 and get the count
	while(n)
	{
		n = (n&(n-1));
		c++;
	}	
	cout<<c<<endl;
}

void checkSetbit()
{
	int n, i;
	// move the ith bit till i reaches the 0th  position check its set or not
	cin>>n>>i;
	
	if((n>>i) & 1)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}

int main()
{
	
	void checkSetbit(), numberOfsetbits(),generate_ith_jth_bitareset();
	int i;
	while(1)
	{
		cout<<"select from the following options"<<endl;
		cout<<"1 ChcekSetbit"<<endl;
		cout<<"2 numberofSetbits"<<endl;
		cout<<"3 generate number where ith and jth bit are set"<<endl;
		cout<<"4 Exit"<<endl;
		cin>>i;
		switch(i)
		{
			case 1:
				checkSetbit();
				break;
			case 2:
				numberOfsetbits();
				break;
			case 3:
				generate_ith_jth_bitareset();
				break;
			case 4:
				exit(0);
		}
	}
	return 0;
	
}
