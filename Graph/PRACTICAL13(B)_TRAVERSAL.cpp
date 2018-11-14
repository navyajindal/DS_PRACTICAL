#include<iostream>
using namespace std;
int q[100],front=-1,rear=-1;

int deleteq()
{
int temp=q[front];
if(front==-1)
cout<<"Underflow"<<endl;
else  if(front==rear)
{
front=-1;
rear=-1;
}
else  if(front==9)
front=0;
else
front=front+1;
return temp;
}

void insert1(int data)
{
    if(rear==9)
cout<<"Overflow"<<endl;
else  if(front==-1)
{
front=0;
rear=0;
q[rear]=data;
}
else{
rear=rear+1;
q[rear]=data;
}
}
int main()
{
int n,m,i,j,k,v,g[50][50],visit[50],visited[50];
cout<<"Enter no of vertices"<<endl;
cin>>n;
cout<<"Enter no of edges"<<endl;
cin>>m;
for(int k=1;k<=m;k++)
{
cout<<"Enter source"<<endl;
cin>>i;
cout<<"Enter destination"<<endl;
cin>>j;
g[i][j]=1;
}


for(int i=1;i<=50;i++)
{
    visit[i]=0;
    visited[i]=0;
}


cout<<"Enter source vertex"<<endl;
cin>>v;
cout<<v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(int j=1;j<=n;j++)
{
if((g[v][j]!=0)&& visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
insert1(j);
}
}
if(front==-1)
{
    return 0;
}
v=deleteq();

cout<<v<<" ";
k++;
visit[v]=0;
visited[v]=1;
}
}

