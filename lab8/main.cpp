/*********************************************************************
** Program name : Lab8
** Author : Justin Phillips
** Date : 2 / 25/ 2018
** Description : Searching and Sorting
*********************************************************************/
#include "menu.hpp"
#include "validator.hpp"
#include "ss.hpp"
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	int normArrSize = 0;
	int earlyArrSize = 0;
	int midArrSize = 0;
	int endArrSize = 0;
	int number;
	std::string fileName;
	
	int* normArr = readFile("norm.txt", normArrSize);
	int* earlyArr = readFile("early.txt", earlyArrSize);
	int* midArr = readFile("middle.txt", midArrSize);
	int* endArr = readFile("end.txt", endArrSize);

	

	do
	{
		std::cout << " What is target value: " << std::endl;
		number = getInt();
		if (number < 0)
		{
			std::cout << " Invalid entry. " << std::endl;
		}
	} while (number < 0);

	int numNormArr = searchAlgorithm(normArr, normArrSize, number);
	int numEarlyArr = searchAlgorithm(earlyArr, earlyArrSize, number);
	int numMidArr = searchAlgorithm(midArr, midArrSize, number);
	int numEndArr = searchAlgorithm(endArr, endArrSize, number);

	printResults(numNormArr, numEarlyArr, numMidArr, numEndArr);

	sortValues(normArr, normArrSize);
	std::cout << " 1. " << std::endl;
	sortValues(earlyArr, earlyArrSize);
	std::cout << " 2. " << std::endl;
	sortValues(midArr, midArrSize);
	std::cout << " 3. " << std::endl;
	sortValues(endArr, endArrSize);
	std::cout << " 4. " << std::endl;

	//quickSort(normArr, 0, normArrSize);
	//quickSort(earlyArr, 0, earlyArrSize);
	//quickSort(midArr, 0, midArrSize);
	//quickSort(endArr, 0, endArrSize);

	//std::cout << " 0 norm value: " << numNormArr << std::endl;


	std::cout << " Please enter a name for the normal array. " << std::endl;
	outputFile(normArr, normArrSize);

	std::cout << " Please enter a name for the early array. " << std::endl;
	outputFile(earlyArr, earlyArrSize);

	std::cout << " Please enter a name for the middle array. " << std::endl;
	outputFile(midArr, midArrSize);

	std::cout << " Please enter a name for the end array. " << std::endl;
	outputFile(endArr, endArrSize);

	//std::cout << " 1norm value: " << numNormArr << std::endl;
	//printResults(numNormArr, numEarlyArr, numMidArr, numEndArr);
	do
	{
		std::cout << " Enter a target value for an binary search in the files. " << std::endl;
		number = getInt();
		if (number < 0)
		{
			std::cout << " Invalid entry. " << std::endl;
		}
	} while (number < 0);

	numNormArr = binarySearch(normArr, normArrSize, number);
	numEarlyArr = binarySearch(earlyArr, earlyArrSize, number);
	numMidArr = binarySearch(midArr, midArrSize, number);
	numEndArr = binarySearch(endArr, endArrSize, number);
	
	//std::cout << " norm value: " << numNormArr << std::endl;

	printResults(numNormArr, numEarlyArr, numMidArr, numEndArr);

	//delete[] normArr;
	//normArr = NULL;
	//delete[] earlyArr;
	//earlyArr = NULL;
	//delete[] midArr;
	//midArr = NULL;
	//delete[] endArr;
	//endArr = NULL;


	return 0;
}