#include<iostream>
using namespace std;
int RLS(int arr[], int l,int r, int x) 
{ 
    if (r < l)	return -1;
    if (arr[l] == x)	return l;
    if (arr[r] == x) 	return r;
    return RLS(arr, l + 1,r - 1, x); 
} 
int main() 
{ 
	int a[10],n,i,pos=-1,x;
    cout<<"Enter the Size of Array - ";
	cin>>n;
	cout<<"Enter Array Elements - ";
	for(i=0; i<n; i++)
		cin>>a[i];
	cout<<"Enter the number to be search : ";
	cin>>x;
	pos=RLS(a,0,n-1,x);
	if (pos==-1)
		cout<<"Element Not Found.";
	else
		cout<<x<<" found at "<<pos+1;
	return 0;
}
