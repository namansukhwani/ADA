#include<iostream>
using namespace std;
int mul(int x,int y)
{
	int i,sum=0;
	for(i=0;i<y;i++)
	{
		sum=sum+x;
	}
	return sum;
}
int main()
{
	int x,y,sol;
	cout<<"Enter 2 no ";
	cin>>x>>y;
	sol=mul(x,y);
	cout<<"Answer is "<<sol;
}
