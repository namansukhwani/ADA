#include<iostream>
using namespace std;

int mul(int x,int y)
{
	if(x==1)
		return y;
	else if(y==1)
		return x;
	else if (x==0 || y==0 )
		return 0;
	return x+mul(x,y-1);			
}

int main()
{
	int x,y,sol;
	cout<<"Enter 2 no ";
	cin>>x>>y;
	sol=mul(x,y);
	cout<<"Answer is "<<sol;
}
