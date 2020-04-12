#include<iostream>
using namespace std;
int pow(int x,int y)
{
	int p=1;
	for(int i=0;i<y;i++)
		p*=x;
	return p;
}
int main()
{
	int x,y,p;
	cout<<"Enter 2 numbers - ";
	cin>>x>>y;
	p=pow(x,y);
	cout<<x<<" ^ "<<y<<" = "<<p<<endl;
	return 0;
}
