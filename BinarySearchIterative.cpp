#include <iostream>
using namespace std;
int BS(int a[],int f,int l,int x) {
	int m;
	while (f<=l) {
		m=(f+l)/2;
		if(a[m]<x)
			f=m+1;
	    else if(a[m]=x)
		 	return m+1;
    	else
   	    	l=m-1;
    }
    return -1;
}
int main()
{
	int n,a[30],x,pos;
	cout<<"Enter Size of Array - "; 
    cin>>n;
    cout<<"Enter Sorted Array Elements - "; 
	for (int i=0;i<n;i++)
        cin>>a[i];
	cout<<"Enter Number to be searched - "; 
    cin>>x;
	pos=BS(a,0,n-1,x);
    if(pos==-1)
	   cout<<x<<" not Found.";
	else
		cout<<x<<" found at position "<<pos<<endl;
	return 0;
}
