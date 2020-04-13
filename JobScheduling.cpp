#include <iostream>
#include <algorithm>
using namespace std;
struct Job{
    int id,d,p;
};
bool cmp(Job x,Job y){
    return x.p>y.p;
}
void JobSeq(Job a[],int n){
    int slot[n],result[n],i;
    for(i=0;i<n;i++){   
        slot[i]=-1;
    }
    for(i=0;i<n;i++){
        for(int j=a[i].d-1; j>=0 ; j--){
            if(slot[j]==-1){
                slot[j]=1;
                result[j]=a[i].id;
                break;
            }
        }
    }
    for(i=0;i<n;i++){  
        if(slot[i]!=-1)
            cout<<result[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Job a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].id;
        cin>>a[i].d;
        cin>>a[i].p;
    }
    sort(a,a+n,cmp);
    JobSeq(a,n);
}
