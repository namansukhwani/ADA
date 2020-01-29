#include<iostream>
using namespace std;
int ls(int a[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			return i+1;
		}
	}
	return -1;
}
int main()
{
	int i,j,n,x,pos;
	cout<<"Enter no of elements of array";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements of array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter elemenl to be searched ";
	cin>>x;
	pos=ls(a,n,x);
	if(pos==-1)
	{
		cout<<"element not found";
	}
	else
		cout<<"element is on position "<<pos;
}
