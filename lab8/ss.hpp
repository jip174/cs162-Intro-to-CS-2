/*********************************************************************
** Program name : Lab8
** Author : Justin Phillips
** Date : 2 / 25/ 2018
** Description : Searching and Sorting
*********************************************************************/

#ifndef SS_HPP
#define SS_HPP
#include <iostream>
#include <fstream>



int *readFile(std::string fileName, int &arrSize);

void outputFile(int *inputArr, int arrSize);

int searchAlgorithm(int *inputArr, int size, int val);

void sortValues(int *inputArr, int size);

void quickSort(int *inputArr, int left, int right);

int binarySearch(int *inputArr, int size, int val);

void printResults(int normSpot, int earlySpot, int midSpot, int endSpot);

#endif

