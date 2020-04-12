#include<iostream>
using namespace std;
int pow(int x,int y) {
    if(y==1)	return x;
    else
        return x*pow(x,y-1);
}
int main() {
    int x,y,p;
    cout<<"Enter 2 numbers - ";
    cin>>x>>y;
    p=pow(x,y);
    cout<<x<<" ^ "<<y<<" = "<<p<<endl;
    return 0;
}
