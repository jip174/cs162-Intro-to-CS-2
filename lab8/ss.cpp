/*********************************************************************
** Program name : Lab8
** Author : Justin Phillips
** Date : 2 / 25/ 2018
** Description : Searching and Sorting
*********************************************************************/

#include "ss.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
/******************************************
*	readFile    						  *
*This function reads the files numbers    *
*  and places them in an array			  *
******************************************/
int *readFile(std::string fileName, int &arrSize)
{
	int num;
	std::ifstream inputFile;
	inputFile.open(fileName);
	int *newArr = new int[arrSize];
	if (inputFile.fail())
	{
		std::cout << " Failed to open " << std::endl;
		exit(1);
	}
	else
	{
		while (!inputFile.eof())
		{
			arrSize++;
			std::cout << "size: " << arrSize << std::endl;
		}
		
	}
	
	inputFile.clear();
	inputFile.seekg(0);
	int i = 0;
	while (!inputFile.eof())
	{
		inputFile >>newArr[i];
		std::cout << " Array number: " << newArr[i] << std::endl;
		i++;
	}
	/*for (int i = 0; i < arrSize; i++)
	{
		inputFile >> num;
		newArr[i] = num;
		std::cout << "num: " << num << std::endl;
	}*/
	//inputFile.clear();
	inputFile.close();
	
	return newArr;

}
/******************************************
*			outputFile    				  *
*This function outputs the array and puts *
*into a user selected file				  *
******************************************/

void outputFile(int *inputArr, int arrSize)
{
	std::string fileName;
	getline(std::cin, fileName);
	std::ofstream outputFile;
	outputFile.open(fileName);
	std::cout << "Filename: " << fileName << std::endl;
	for (int i = 0; i < arrSize; i++)
	{
		outputFile << inputArr[i];
		std::cout << " Number output to file: " <<inputArr[i] << " " << std::endl;
	}
	std::cout << " " << std::endl;
	outputFile.close();
}

/******************************************
*	searthAlgorithm     				  *
*This function uses a linear search that  *
*searches the array till the value is found  
******************************************/
int searchAlgorithm(int *inputArr, int size, int val)
{
	for (int i = 0; i < size ;i++)
	{
		if (inputArr[i] == val)
		{
			std::cout << " returned value spot1: " << i << "Searched value: "<< val << std::endl;
			return i;
		}
	}
	return -1;
}
/******************************************
*	sortValue    						  *
*This function sorts the array using bubble  
*sort. I used week slides for the function*
******************************************/
void sortValues(int *inputArr, int size)
{
	int temp = 0;
	bool again;
	/*for (int i = (size - 1); i >=0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (inputArr[j - 1] > inputArr[j])
			{
				int temp = inputArr[j - 1];
				inputArr[j - 1] = inputArr[j];
				inputArr[j] = temp;
			}
		}
	}*/
	do
	{
		again = false;

		for (int i = 0; i < (size - 1); i++)

		{
			for (int j = 0; j < (size - i - 1); j++)
			{
				if (inputArr[j] > inputArr[j + 1])
				{
					std::cout << "1 Sorted value: " << inputArr[j] << " : " << inputArr[j + 1] << std::endl;
					temp = inputArr[j];
					inputArr[j] = inputArr[j + 1];
					inputArr[j + 1] = temp;
					again = true;
					std::cout << "Sorted value: " << inputArr[j] << " : " << inputArr[j + 1] << std::endl;

				}
				//else
				//{
					//std::cout << "value lower: " << std::endl;
				//}

			}
		}
	} while (again);
}

void quickSort(int *inputArr, int left, int right)
{
	int i = left;
	int j = right;
	int temp;
	int pivot = inputArr[(left + right) / 2];

	while (i <= j)
	{
		while (inputArr[i] < pivot)
		{
			i++;
		}
		while (inputArr[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			temp = inputArr[i];
			inputArr[i] = inputArr[j];
			inputArr[j] = temp;
			i++;
			j--;
		}
	}
	if (left < j)
	{
		quickSort(inputArr, left, j);
	}
	if (i < right)
	{
		quickSort(inputArr, i, right);
	}
}


/******************************************
*		binarySearch     				  *
*This function uses a binary search and   *
*searches for a value in the array		  *
******************************************/
int binarySearch(int *inputArr, int size, int val)
{
	int lowest = 0;
	int highest = (size-1);
	while (lowest <= highest)
	{
		int middle =lowest +((highest-lowest) / 2);
		//int middleVal = inputArr[middle];
		if (inputArr[middle] == val)
		{
			return middle;
			//lowest = middle + 1;
		}
		else if (inputArr[middle] > val)
		{
			//return binarySearch(inputArr, )
			highest = middle - 1;
		}
		else
		{
			lowest = middle + 1;
			//return middle;
		}
		
	}
	return -1;
}
/******************************************
*			printResults     			  *
*This function prints the arrays values   *
*										  *
******************************************/
void printResults(int normSpot, int earlySpot, int midSpot, int endSpot)
{
	if (normSpot != -1)
	{
		std::cout << " norm.txt value spot: " << normSpot << std::endl;
	}
	else
	{
		std::cout << " norm.txt wasnt able to find value. " << std::endl;
	}
	if (earlySpot != -1)
	{
		std::cout << " early.txt value spot: " << earlySpot << std::endl;
	}
	else
	{
		std::cout << " early.txt wasnt able to find value. " << std::endl;
	}
	if (midSpot != -1)
	{
		std::cout << " mid.txt value spot : " << midSpot << std::endl;
	}
	else
	{
		std::cout << " mid.txt wasnt able to find value. " << std::endl;
	}
	if (endSpot != -1)
	{
		std::cout << " end.txt value spot: " << endSpot << std::endl;
	}
	else
	{
		std::cout << " end.txt wasnt able to find value. " << std::endl;
	}
}
