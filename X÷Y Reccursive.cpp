#include<iostream>
using namespace std;
int q=0,r=0;
int div(int x,int y) {
	if (y==0)
		cout<<"Not Defined! Denominator can not be 0\n";
	else if(x>=y) {
			q++;
			q,r=div(x-y,y);
	}
	else {
		r=x;
		return q,r;
	}
}
int main() {
	int x,y;
	cout<<"Enter Numerator - ";
	cin>>x;
	cout<<"Enter Denominator - ";
	cin>>y;
	q,r=div(x,y);
	cout<<"Quotient is - "<<q<<endl;
	cout<<"Remainder is - "<<r;
	return 0;
}
