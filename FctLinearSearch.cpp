// FctLinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Header.h"
#include <iostream>

int main()
{
    int index = linearsearch(list); // Call the linearsearch function
    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl; // If found, print the index
    }
    else {
        std::cout << "Element not found." << std::endl; // If not found, print a message
    }
    return 0;
}

