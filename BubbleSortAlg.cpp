#include<iostream>
#include<ctime>
#include<cstdlib>

void AlgorithmBubbleSort(int tempArray[], int magnitude) 	//using pointers 
{
	for(int i = 0; i < magnitude; i++)
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
	
	for(int i = 0; i < 15; i++)
	tempArray[i] = rand() % 200 - 100; //generates 15 random values 
	OutputArray(tempArray, 15);
	AlgorithmBubbleSort(tempArray, 15);
	OutputArray(tempArray, 15);
	return 0;
}

