/* Programmar: Bradley Stillings
Implement a menu based program with the following array-based list functions:
Add (at the end of array)
INSERT (element at a given location)
DELETE (element from a given location)
SHOW (all array elements)
COUNT (total number of elements)
CLEAR (initialize array)
*/
#include<iostream>

using namespace std;

void menuSelection(void)
{
	cout << "Please Choose an Option(s) from the menu" << endl;
	cout << ("\n1. ADD");
	cout << ("\n2. INSERT"); // given location
	cout << ("\n3. DELETE");
	cout << ("\n4. SHOW");
	cout << ("\n5. COUNT");
	cout << ("\n6. CLEAR");
	cout << ("\n7. EXIT");
	cout << ("\nPlease Enter your choice: ");	
}

int main()
{
	int array[10];
	int n;
	int selection = 0;
	while(n != 7)
	{
		menuSelection();
		cin >> selection;
	
	switch(selection)
	{
		case 1:
		{
			int add_element;
			cout << "Enter a number to Add "; // adds at the end 
			cin >> add_element; // takes input 
			array[n] = add_element;
			n++; 
			break;
		}
		case 2:
		{
			int new_element;
			int position;
			cout << "Enter a number to insert: ";  
			cin >> new_element;
			cout << "Enter the index location: "; // at specified index
			cin >> position;
			position--;
			for(int i=n-1;i>=position;i--)
			array[i+1] = array[i];
			array[position] = new_element;
			n++;
			break;	
		}
		case 3:
		{
			int position;
			cout << "Enter the index # to be deleted: ";
			cin >> n;
			for(position=0;position<n;position++)
			
				for(int i=position;i<n;i++)
				array[i]=array[i+1];
				cout << "The element has been deleted successfully: " << endl;
				n--;
				break;	
		}
		case 4: 
		{
			cout << "Enter the index " << endl; // show
			cin >> n;
			cout << "The element is: " << array[n-1] << endl;
			break;
		}
		case 5: 
		{
			cout << "The Count is: "; // count ~
			cout << n << endl;
			break;
		}
		case 6: 
		{
			cout << "The elements are cleared " << endl; // clear
			for(int i=0;i<n;i++)
			array[i]=0;
			break;
		}
		case 7:
		{
			cout << "Goodbye ";    //quit
			return(0);
			break;
		}
		}
	}
}

	



