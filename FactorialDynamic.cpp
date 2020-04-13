#include <iostream>
using namespace std;
int result[1000] = {0};
int fact(int n) {
   	if (n >= 0) {
      	result[0] = 1;
      	for (int i=1;i<=n;++i) {
         	result[i]=i*result[i-1];
      	}
      	return result[n];
   	}
}
int main() {
   	int n;
      	cout<<"Enter any integer - ";
      	cin>>n;
      	cout<<"Factorial is - "<<fact(n)<<endl;
   	return 0;
}
