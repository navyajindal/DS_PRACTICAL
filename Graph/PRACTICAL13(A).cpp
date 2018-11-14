#include<iostream>
using namespace std;
int main(){
	int m,n,k,i,j,g[50][50],stack[50],top=-1,visit[50],visited[50],v;
	cout<<"enter the vertices"<<endl;
	cin>>n;
	cout<<"enter the edges"<<endl;
	cin>>m;
	for(k=1;k<=m;k++){
		cout<<"enter the source and destination"<<endl;
		cin>>i>>j;
		g[i][j]=1;
	}
	
	cout<<"enter the source vertex"<<endl;
	cin>>v;
	cout<<v<<" ";
	k=1;
	while(k<n){
		for (int j=n;j>=1;j--){
			if((g[v][j]==1) && visited[j]!=1 && visit[j]!=1){
				visit[j]=1;
				stack[++top]=j;
			}
		}
		v=stack[top--];
		cout<<v<<" ";
		k++;
		visit[v]=0;
		visited[v]=0;
	}
}

