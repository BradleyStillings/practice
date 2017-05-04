#include<iostream>
#include<ctime>
#include<cstdlib>

void InsertionSort(int tempArray[], int size)
{
	int i = 1, j;
	for(; i < size; i++)
	{
		j = i;
		while(j > 0 && tempArray[j] > tempArray[j - 1])
	{
		int temp = tempArray[j];
		tempArray[j] = tempArray[j - 1];
		tempArray[--j] = temp;
		}
	}
}

void PrintArray(int *tempArray, int size)
{
	for(int i =0; i < size; i++)
	std::cout << "[" << tempArray[i] << "]";
	std::cout << std::endl;
	}
int main()
{
	int tempArray[10];
	srand(time(0));
	for(int i = 0; i < 10; i++)
	tempArray[i] = rand() % 200 - 100;
	
PrintArray(tempArray, 10);
InsertionSort(tempArray , 10);
PrintArray(tempArray, 10);

return 0;
}

