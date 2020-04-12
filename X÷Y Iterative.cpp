#include<iostream>
using namespace std;
void div(int x,int y,int *q,int *r) {
	int rem;
	if (y==0) {
		cout<<"Not Defined! Denominator can not be 0.";
	}
	else if(x==0) {
		*q=0;
		*r=0;
	}
	else {
		for(rem=0;x>=y;rem++)
			x-=y;
		*q=rem;
		*r=x;
	}
}
int main() {
	int x,y,q,r;
	cout<<"Enter Numerator - ";
	cin>>x;
	cout<<"Enter Denominator - ";
	cin>>y;
	div(x,y,&q,&r);
	cout<<"Quotient is - "<<q<<endl;
	cout<<"Remainder is - "<<r;
	return 0;
}
