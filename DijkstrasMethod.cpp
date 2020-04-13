#include<iostream>
using namespace std;
#define V 7
int mindistance(int distance[],bool mstset[]){
	int min=INT_MAX,min_index;
	for(int v=0;v<V;v++){
		if(mstset[v]==false &&distance[v]<min){
			min=distance[v];
			min_index=v;
		}
	}
	return min_index;
}

void printmst(int distance[],int n){
	cout<<"Vertex Distance from Source:"<<endl;
	for(int i=0;i<V;i++){
		cout<<i<<" - "<<distance[i]<<endl;
	}
}

void dijikstamst(int graph[V][V],int source){
	int distance[V];
	bool mstset[V];
	for(int i=0;i<V;i++){
		distance[i]=INT_MAX,mstset[i]=false;
	}
	distance[source]=0;
	for(int count=0;count<V-1;count++){
		int u=mindistance(distance,mstset);
		mstset[u]=true;
		for(int v=0;v<V;v++)
			if(graph[u][v] && mstset[v]==false && graph[u][v]+distance[u]<distance[v]){
				distance[v]=graph[u][v]+distance[u];
			}
	}
	printmst(distance,V);
}
int main(){
	int graph[V][V]={{0,28,0,0,0,10,0},
					  {28,0,16,0,0,0,14},
					  {0,16,0,12,0,0,0},
					  {0,0,12,0,22,0,18},
					  {0,0,0,22,25,0,24},
					  {10,0,0,25,0,0,0},
					  {0,14,0,18,24,0,0}
					};
	dijikstamst(graph,0);
	
	return 0;
}
