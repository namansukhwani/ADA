#include<iostream>
using namespace std;
struct item{
	double p,w,pw;
};
bool cmp(item x,item y){
	return x.pw>y.pw;
}
void Kanpsack(item a[],int n,int m){
	int u=m;
	double total_profit=0.0;
	double x[n]={0};
	int i;
	for(i=0;i<n;i++){
		if(a[i].w>u)
			break;
		x[i]=1;
		total_profit+=a[i].p;
		u=u-a[i].w;
	}
	if(u!=0){
		x[i]=u/a[i].w;
		total_profit+=(x[i]*a[i].p);
	}
	cout<<"Total Profit - "<<total_profit;
}
int main(){
	int n,u;
	cout<<"Enter Capacity of Knapsack - ";
	cin>>u;
	cout<<"Enter No. of Items - ";
	cin>>n;
	item a[n];
	cout<<"Enter Profit and Weight of Items - ";
	for(int i=0;i<n;i++){
		cin>>a[i].p>>a[i].w;
		a[i].pw=a[i].p/a[i].w;
	}
	Kanpsack(a,n,u);
}
