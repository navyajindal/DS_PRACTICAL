#include<iostream>
using namespace std;
struct NODE{
	int data;
	NODE *next;
};
class linked_list{
	NODE *head;
	public:
		linked_list(){
			head=NULL;
		}
		void push(int v)
		{
			NODE *p;
			p=new NODE();
			p->data=v;
			p->next=NULL;
			if(head==NULL)
			{
			    head=p;
			}
			else
			{
				
				p->next=head;
				head=p;
			}
			
		}
		void peep()
		{
			NODE *q=head;
			while(q!=NULL)
			{
				cout<<q->data<<endl;
				q=q->next;
			}
	}
		void pop()
		{
			NODE *p,*q;
			p=head;
			head=p->next;
			p->next=NULL;
			delete(p);
		}
};
int main(){
	linked_list l;
	char ch;
	int n;
	cout<<"1. push"<<endl<<"2.pop"<<endl<<"3. peep"<<endl;
	do{cout<<"choose a case";
	cin>>n;
	switch(n)
	{
		case 1:
			{
			int item,v;
		cout<<"USING PUSH FUNCTION\nENTER NO OF ELEMENTS TO PUSH:\n";	
		cin>>item;
		for(int i=0;i<item;i++)
		{
			cin>>v;
		l.push(v);	
		}
   break;
	}
	case 2:
	{
			cout<<"USING POP FUNCTION\n";
	l.pop();
	break;
		}	
		case 3:
			{
					cout<<"USING PEEP FUNCTION\n";
	
	           l.peep();
				break;
			}
			}
			cin>>ch;
	}
	while(ch=='Y');

}
