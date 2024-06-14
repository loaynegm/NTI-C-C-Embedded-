/*
 * Task4.c
 *
 *  Created on: Feb 11, 2024
 *      Author: loay_negm
 
	Write a C program to print all even&odd numbers between 1 to 100.
	using while loop and conditional statment.
*/

#include<stdio.h>

int main()
{
	for(int i = 1; i<=100; i++)	
	{
		if((i%2) == 0)
		{
			printf("\n %d is Even",i);
		}
		if((i%2) != 0)
		{
			printf("\t %d is Odd",i);
		}
	}
	return 0;
}
