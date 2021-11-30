/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Riya Singh
 */

//The purpose of this program is to perform addition, subtraction, multiplication, and division.

#include <iostream> //allows program to perform input and output
#include <string> //allows program to work with strings
#include "std_lib_facilities.h" //header file

int main()
{
	std::string str;
	std::cin >> str; //store the operation in string
	
	if(str == "+")
	{
		double num1;
		double num2;
		
		//scan and store the double values
		std::cin >> num1; 
		std::cin >> num2;
		
		//add the values
		double sum = num1 + num2;
		
		//output statement
		std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
		
	}
	else if(str == "-")
	{
		double num1;
		double num2;
		
		//scan and store the double values
		std::cin >> num1;
		std::cin >> num2;
		
		//subtract the double values
		double sub = num1 - num2;
		
		//output statement
		std::cout << "The difference of " << num1 << " and " << num2 << " is " << sub << std::endl;
	}
	else if(str == "*")
	{
		int num1;
		int num2;
		
		//scan and store the integer values
		std::cin >> num1;
		std::cin >> num2;
		
		//multiply the integers
		int mul = num1 * num2;
		
		//output statement
		std::cout << "The product of " << num1 << " and " << num2 << " is " << mul << std::endl;
	}
	else if(str == "/")
	{	
		int num1;
		int num2;
		//scan and store the integer values
		std::cin >> num1;
		std::cin >> num2;
		
		//divide the integers
		int div = num1/num2;
		
		//output statement
		std::cout << num1 << " divided by " << num2 << " equals " << div << std::endl;}
	else
	{
		//Default statement for invalid input
		std::cout << "Invalid operation" << std::endl;
	}
	
	
}
