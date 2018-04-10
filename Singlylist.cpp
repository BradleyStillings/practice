/* Write a menu driven program that implements the following linked list operations: 
Insert (at the beginning) Insert_Alhpa (in alphabetical order)
Delete (Identify by contents, i.e "John", not #3) COUNT, CLEAR 
Programmar: Bradley Stillings*/
#include<iostream>

using namespace std;

// Node declaration
struct node
{
	int information;
	struct node *next;
}*start;

/* Class Declaration */
class singly_list
{
public:
node* c_node(int);
void insert_begin();
void insert_alpha();
void delete_F();
void count_F();
void clear_F();
void display();
singly_list()
{
start = NULL;
}
};
	
int main()
{
int selection;
int node;
int position;
int i;
int element;
singly_list s1;
start = NULL;
while(1)
{
cout <<" Operations of Linked List: "<<endl;
cout <<" 1. Insert at the beginning: "<<endl;
cout <<" 2. Insert in alphabetical order:"<<endl;
cout <<" 3. Delete by contents: "<<endl;
cout <<" 4. COUNT" <<endl;
cout <<" 5. Clear" <<endl;
cout <<" 6. Exit" <<endl;
cout <<" Enter a Selection: " <<endl;
cin>>selection;

switch(selection)
{
case 1: 
	cout <<"Inserting node at start:" <<endl;
	s1.insert_begin();
	cout<< endl << endl;
	break;
case 2:
cout <<"Node inserted Alphabetically: " << endl;
s1.insert_alpha();
cout<<endl;
break;

case 3: 
cout << "Deleting Content: "<< endl;
s1.delete_F();
break;

case 4: 
cout << "Here is the COUNT"<<endl;
s1.display();
cout<<endl << endl;
break;

case 5: 
cout << "The list has been cleared: "<<endl;
s1.clear_F();
break;

case 6:
cout << endl;
cout << "Now exiting: ";
exit(1);
break;

default:
cout<< "Please pick a choice:"<<endl;
}
}
}
/* node creation */
node *singly_list::c_node(int element)
{
struct node *temp;
temp = new(struct node);
if (temp == NULL)
{
cout<< "Error" << endl;
return 0;
}
else
{
temp->information = element;
temp->next = NULL;
return temp;
}
}


/* Inserting an element at the beginning  */
void singly_list::insert_begin()
{
	int element;
	cout <<"Enter the value to be inserted at start: ";
	cin >>element;
	struct node *temp, *p;
	temp = c_node(element);
	if(start == NULL)
	{
		start = temp;
		start->next = p;
	}
	cout <<"Element inserted at start"<<endl;
	}
	
void singly_list::insert_alpha()
{
	int element;
	int position;
	int counter = 0;
	cout << "Enter the value to be inserted: ";
	cin>>element;
	struct node *temp, *s, *ptr;
	temp = c_node(element);
	cout<< "enter the position alphabetically";
	cin>>position;
	int i;
	s = start;
	while (s != NULL)
	{
		s = s->next;
		counter++;
	}
	if (position == 1)
	{
if (start == NULL)
{
start = temp;
start->next = NULL;
}
else
{
ptr = start;
start = temp;
start->next = ptr;
}
}
else if (position > 1 && position <= counter)
{
s = start;
for (i = 1; i < position; i++)
{
ptr = s;
s = s->next;
}
ptr->next = temp;
temp->next = s;
}
else
{
cout<<"Error" <<endl;
}
}
	/* Delete element  */
void singly_list::delete_F()
{
	int pos;
	int i;
	int counter = 0;
	if (start == NULL)
	{
	cout << "Your list is empty"<<endl;
	return;
	}
	cout << "Enter the value to be deleted: ";
	cin >>pos;
	struct node *s, *ptr;
	s = start;
	if (pos == 1)
	{
	start = s->next;
	}
	else
	{
	while (s != NULL)
	{
	s = s->next;
	counter++;
	}
	if (pos > 0 && pos <= counter)
	{
	s = start;
	for (i = 1; i < pos;i++)
	{
	ptr = s;
	s = s->next;
	}
	ptr->next = s->next;
	}
	else
	{
	cout <<"That position is not valid"<<endl;
	}
	delete(s);
	cout<<"The Element has been deleted"<<endl;
	}
}
void singly_list::clear_F()
{
struct node *temp, *s, *ptr;
temp = s->next;
while(temp!=NULL)
{
	ptr = s;
	ptr->next = s->next;
	temp->next = NULL;
	delete(temp);
	temp = s->next;
	cout<<"The Elements have been cleared"<<endl;
}
}
	/* Display elements of a linked list */
void singly_list::display()
{
struct node *temp;
if (start == NULL)
{
cout << "The list is Empty"<<endl;
return;
}
temp = start;
cout <<"Elements in the list are: "<<endl;
while (temp != NULL)
{
cout<<temp->information<<"->";
temp = temp->next;
}
}







