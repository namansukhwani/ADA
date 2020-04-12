#include<bits/stdc++.h>
using namespace std;

struct item 
{
	double w,p,pw;
};

bool cmp(struct item x,struct item y) 
{
	return (x.pw>y.pw);
}

void knapsack(struct item a[],int n,int m)
{
	int u=m,i;
	double totalp=0;
	double x[n]={0};
	
	for(i=0;i<n;i++) {
		if(a[i].w>u) {
			break;
		}
		x[i]=1;
		totalp+=x[i]*a[i].p;
		u-=a[i].w;
	}
	
	if(u!=0) {
		x[i]=u/a[i].w;
		totalp+=x[i]*a[i].p;
	}
	cout<<"Total Profit is - "<<totalp;
}

int main() 
{
	int x,totalw;
	cout<<"Enter total weight of bag - ";
	cin>>totalw;
	cout<<"Enter no. of items - ";
	cin>>x;
	item a[x];
	for(int i=0;i<x;i++) {
		cout<<"Enter profit of item "<<i+1<<" - ";
		cin>>a[i].p;
		cout<<"Enter weight of item "<<i+1<<" - ";
		cin>>a[i].w;
		a[i].pw=a[i].p/a[i].w;
		cout<<"Profit Weight ratio of item "<<i+1<<" - "<<a[i].pw<<endl;
		sort(a,a+x,cmp);
		knapsack(a,x,totalw);
		return 0;
	}
}
