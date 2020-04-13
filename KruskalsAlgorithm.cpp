#include<iostream>
#include<algorithm>
using namespace std;
struct edge{
	int source,destination,weight;
};
struct subset{
	int parent,rank;
};
bool cmp(edge x,edge y){
	return x.weight < y.weight;
}
int find(subset s[],int i){
	if(s[i].parent != i){
		s[i].parent = find(s,s[i].parent);
	}
	return s[i].parent;
}
void Union(subset s[],int x,int y){
	if(s[x].rank == s[y].rank){
		s[y].parent = x;
		s[x].rank++;
	}else if(s[x].rank < s[y].rank){
		s[y].parent = x;
	}else{
		s[x].parent = y;
	}
}
int main(){
	int n;
	cin>>n;
	int v;
	cin>>v;
	edge g[n];
	for(int i=0;i<n;i++){
		cin>>g[i].weight;
		cin>>g[i].source;
		cin>>g[i].destination;
	}
	sort(g,g+n,cmp);
	subset s[v];
	for(int i=0;i<v;i++){
		s[i].parent = i;
		s[i].rank=0;
	}
	edge next_edge,result[v-1];
	int k=0,x,y;
	for(int i=0;i<v-1 ;i++){
		next_edge = g[i];
		x = find(s,g[i].source);
		y = find(s,g[i].destination);
		if(x!=y){
			result[k++]=next_edge;
			Union(s,x,y);
		}
	}
	for(int i=0;i< k;i++){
		cout<<result[i].source<<"\t"<<result[i].destination<<"\t"<<result[i].weight<<endl;
	}
	return 0;
}
