#include<iostream>
using namespace std;
int RBS(int a[], int l, int r, int x) { 
    if (r >= l) { 
        int mid=(l+r)/2;
        if(a[mid] == x)
            return mid+1;
        else if (a[mid] > x)
            return RBS(a,l,mid-1,x);
        else
        	return RBS(a,mid+1,r,x);
    }
    return -1;
} 
int main() {
	int n,a[30],num,pos;
	cout<<"Enter Size of Array - "; 
    cin>>n;
    cout<<"Enter Array Elements - "; 
	for (int i=0;i<n;i++)
        cin>>a[i];
	cout<<"Enter Number to be searched - "; 
    cin>>num;
	pos=RBS(a,0,n-1,num);
	if(pos==-1)
		cout<<num<<" Not Found.";
	else
		cout<<num<<" found at position "<<pos;
	return 0;
}
