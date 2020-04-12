#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int c = *a;  
    *a = *b;  
    *b = c;  
}
int partition(int a[],int l,int h) {
    int pivot=a[h];  
    int i=(l-1);
    for(int j=l;j<=h-1;j++) {
        if (a[j]<pivot) {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return(i+1);
}
void Quick_Sort(int a[],int l,int h) {
    if (l<h) {
        int pi = partition(a, l, h);
        Quick_Sort(a, l, pi - 1);
        Quick_Sort(a, pi + 1, h);
    }
}
int main() {
	int i,n,a[100];
	cout<<"Enter size of array - ";
	cin>>n;
	cout<<"Enter array elements - ";
	for(i=0;i<n;i++)
		cin>>a[i];
	Quick_Sort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
