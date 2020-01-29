#include<iostream>
using namespace std;
int ls(int a[],int n,int item,int i)
{
	if(i==n)
		return -1;
	else if(a[i]==item)
		return i+1;
	ls(a,n,item,++i);		
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
	pos=ls(a,n,x,0);
	if(pos==-1)
	{
		cout<<"element not found";
	}
	else
		cout<<"element is on position "<<pos;
}
