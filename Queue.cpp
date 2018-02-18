/* Implement a menu based program with the following array-based queue functions:
+ADD(an element to the end of queue), DELETE(an element from the front of queue)
+SHOW (all elements,starting at first, ending at last), COUNT (total number of elements)
+CLEAR (initialize queue) 
Programmar: Bradley Stillings */

#include<iostream> 
         
using namespace std;
        
#define MAX 10               

void ADD(int k);        
int Delete();             
void Show();
bool isEmpty();
bool isFull ();

int n[MAX];
int head=0;
int tail=0; 


int main(){
    int Selection;
	int variable;
	int i;
    char ch='y';

    do{
	cout << " Choose an Option(s) from the menu" << endl;
	cout << ("\n1. ADD");
	cout << ("\n2. DELETE");
	cout << ("\n3. SHOW");
	cout << ("\n4. COUNT");
	cout << ("\n5. CLEAR");
	cout << ("\nEnter your choice: ");	
	cin >>Selection;

switch(Selection)
{
case 1 :        // add
if( isFull() ){
cout<<"\nThe Queue is full\n";
break;
}
cin>>variable;
ADD(variable);
break;

case 2 :        // delete
if( isEmpty() ){
cout<<"\nSorry, You're Queue is empty'\n";
break;
}
cout<<"\nElement Deleted: "<<Delete()<<endl;
cout << "Queue" << endl;
Show();
break;

case 3 :        // show
if( isEmpty() ){
cout<<"\nThe Queue Empty\n";
break;
}
cout << "Here is the Queue: " << endl;
Show();
break;
case 4:
	
default :
cout<<"Choose an option";
}
cout<<"continue?(y/n):";
cin>>ch;
}while(ch=='y'||ch=='Y');  

return 0;
}

void ADD(int x){

    n[tail] = x;
    tail =(tail+1)%MAX ;       
}

int  Delete(){

    int temp =n[head];
    head =(head+1)%MAX ;       
    return temp;
}

void Show(){
    int i;                              
    for(i=head; i!=tail; i=(i+1)% MAX)  
        cout<<n[i]<<" ";
    cout<<endl;
}

bool isFull(){
    if( (head == tail + 1) || (tail == MAX-1 && head == 0))
        return true;
    else
        return false;
}

bool isEmpty(){
    if(head == tail)
        return true;
    else
        return false;
}


