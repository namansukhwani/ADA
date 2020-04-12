#include<iostream>
using namespace std;
void swap(int *a, int *b) {
    int c = *a;  
    *a = *b;  
    *b = c;  
}
void heapify(int a[],int n,int i) { 
    int lar = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
  	if (l < n && a[l] > a[lar])
        lar = l;
	if (r < n && a[r] > a[lar])
        lar = r;
	if (lar != i) { 
        swap(&a[i],&a[lar]);
        heapify(a, n, lar); 
    }
}
void Heap_Sort(int a[], int n) {
    for (int i = n/2 -1; i>=0;i--)
        heapify(a,n,i);
    for (int i=n-1; i>=0; i--) {  
        swap(&a[0],&a[i]); 
        heapify(a,i, 0); 
    } 
}
int main() {
	int i,n,a[100];
	cout<<"Enter size of array - ";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	Heap_Sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
