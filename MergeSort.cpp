#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) 
        L[i] = a[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = a[m + 1+ j]; 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            a[k] = L[i]; 
            i++; 
        } 
        else { 
            a[k] = R[j]; 
            j++; 
        }
        k++; 
    } 
    while (i < n1) { 
        a[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        a[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void Merge_Sort(int a[], int l, int r) { 
    if (l < r) {
        int m = l+(r-l)/2;
        Merge_Sort(a, l, m); 
        Merge_Sort(a, m+1, r); 
        merge(a, l, m, r); 
    } 
}
int main() {
	int i,n,a[100];
	cout<<"Enter size of array - ";
	cin>>n;
	cout<<"Enter array elements - ";
	for(i=0;i<n;i++)
		cin>>a[i];
	Merge_Sort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;
}
