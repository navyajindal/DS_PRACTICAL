#include<iostream>
using namespace std;
struct node
{
	node *next;
	int data;
};
class stack
{
	node *head;
	public:
		stack()
		{
			head=NULL;
		}
		void push(int n)
		{
			node *new_node=new node;
			new_node->data=n;
			new_node->next=NULL;
			if(head==NULL)
			{
				head=new_node;
			}
			else 
			{
				new_node->next=head;
				head=new_node;
			}
		}
		void pop()
		{
			node *p;
			p=head;
			head=p->next;
			p->next=NULL;
			delete(p);
		}
		void display()
		{
			cout<<"The no. on top of the stack is "<<start->data<<endl;
		}
};
int main()
{
	stack a;
	int n,num;
	char ch;
	do{
		cout<<"enter the case"<<endl;
	cin>>n;
	switch(n)
		{
			case 1:
				int i;
				cout<<"enter the no. of values to be pushed"<<endl;
				cin>>i;
				for(int j=1;j<=i;j++)
				{
					cin>>num;
				a.push(num);}
				break;
			case 2:
				a.pop();
				break;
			case 3:
				a.display();
				break;
		}
		cout<<"press 'y' to continue"<<endl;
		cin>>ch;
}while(ch!='n');
}

