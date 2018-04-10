/*Write a program to implement Heap sort. 
Also implement one of the slow sorts (Bubble, Insertion...). 
After you have tested both, generate a very large array (30,000 or more)  of bytes and sort increasingly larger portions of the array 
(5000, 10000, ..., 30000) with both algorithms. 
Draw a graph of execution time versus number of elements for both algorithms. 
What are your conclusions?  
Programmar: Bradley Stillings 
*/
#include <iostream>
using namespace std;

void Heap_Max(int array[], int i, int n)
{
	int left;
	int right;
	int largest;
	int loc;
	left=2*i;
	right=(2*i+1);
	
	if((left<=n)&&array[left]>array[i])
	largest = left;
	else
	largest = i;
	
	if((right<=n)&&(array[right]>array[largest])) 
	largest=right;
	
	if(largest!=i)
	{
		loc=array[i];
		array[i]=array[largest];
		array[largest]=loc;
		Heap_Max(array, largest, n);
	}
}
void Build_MaxH(int array[], int n)
{
	for(int j = n/2; j >= 1; j--)
	{
		Heap_Max(array, j, n);
		
	}
}
void heap_Sort(int array[], int n)
{
	Build_MaxH(array,n);
	int i;
	int temp_Variable;
	for (i = n; i >= 2; i--)
	{
		temp_Variable = array[i];
		array[i] = array[1];
		array[1] = temp_Variable;
		Heap_Max(array, 1, i - 1);
	}
}
int main()
{
	int n;
	cout<< "Enter the array size to sort: " << endl;
	cin>>n;
	int array[n];
	cout <<"Enter the contents of the array" << endl;
	for (int i = 1; i <= n; i++)
	{
		cin >> array[i];
	}
	heap_Sort(array, n);
	cout <<"Here are the Results: "<< endl;
	for (int i = 1; i <= n; i++)
	{
		cout << array[i] << endl;
	}
}	


