#include<iostream>
#include<ctime>
#include<cstdlib>


void AlgorithmBubbleSort(int tempArray[], int magnitude) 	//using pointers 
{
	for(int k = 0; k < magnitude; k++)
	{
		for(int k = 0; k < magnitude - 1; k++)
		{
		if(tempArray[k] > tempArray[k + 1])	
		{
			int temp = tempArray[k];
			tempArray[k] = tempArray[k + 1];
			tempArray[k + 1] = temp;
		}
		}
	}
} // 0(n ^ 2)
void AlgorithmSelectionSort( int tempArray[], int magnitude )
{
	int minimumValue;
	for(int k = 0; k < magnitude; k++)
	{
		minimumValue = k;
		for(int j = k; j < magnitude; j++)
	{
	    if(tempArray[j] < tempArray[minimumValue])
	    minimumValue = j;
    } 
    int temp = tempArray[k];
    tempArray[k] = tempArray[minimumValue];
    tempArray[minimumValue] = temp;
}
}
void OutputArray(int *tempArray, int magnitude)
{
	for(int i = 0; i < magnitude; i++)
	std::cout << "[" << tempArray[i] << "]"; 					//calls for for loop to print array
std::cout << std::endl;											//starts a new line 
}

int main()
{
	int tempArray[15];
	srand(time(0));
	
	for(int k = 0; k < 15; k++)
	tempArray[k] = rand() % 200 - 100; //generates 15 random values 
	
	OutputArray(tempArray, 15);
	AlgorithmSelectionSort(tempArray, 15);
	OutputArray(tempArray, 15);
	return 0;
}


