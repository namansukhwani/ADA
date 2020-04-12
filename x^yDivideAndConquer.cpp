#include<iostream>
using namespace std;
int pow(int x,int y) {
    if(y==1)	return x;
    int t=pow(x,y/2);
    t*=t;
    if(y%2==1)
        t*=x;
    return t;
}
int main() {
    int x,y,p;
    cout<<"Enter 2 numbers - ";
    cin>>x>>y;
    p=pow(x,y);
    cout<<x<<" ^ "<<y<<" = "<<p<<endl;
    return 0;
}
