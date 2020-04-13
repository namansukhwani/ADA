#include<iostream>
#include<math.h>
#include<process.h>
using namespace std;
int n=4,count=0;  
int x[5] = {0};
int check() {
	for (int i=1;i<=n;i++)
		if(x[i]!=0) 
			return 0;
	return 1;
}
void write(int x[]) { 
	for (int i=1;i<=n;i++) 
		cout<<x[i]<<" ";
}
int isattackcol(int c) {
    for(int temp=1;temp<=n;temp++)
		if(x[temp]==c)
			return 1;
	return 0;
}
int isattackdiag(int r, int c) {   
	for(int temp=1;temp<=n;temp++) {  
		if(x[temp]!=0) {  
			if(abs(temp-r)==abs(x[temp]-c)) 
				return 1;
		}
	}
	return 0;
}
void  Nqueen(int r) { 
	int c=1;
	while(c<=n) {	   
		int check1=isattackcol(c);
		int check2=isattackdiag(r,c);
		if(check1==0 && check2==0) {	
			x[r]=c;
			if(r==n) {
			 	cout<<"\nOutput \n";
				count++;
				write(x);
			}
	     	else
		 		Nqueen(r+1);
		}
		c++;s
	}
	x[r]=0;
	if(check()==1) {
		cout<<"\nNo more outputs";
		cout<<"\nTotal Solutions: "<<count; 
		exit(-1);
	}
}
int main() { 
	Nqueen(1);
}
