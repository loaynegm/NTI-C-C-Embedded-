/*
 * Task2.c
 *
 *  Created on: Feb 10, 2024
 *      Author: loay_negm
 */
/*
	Write a C program to print all natural numbers in reverse from n to 1 using for loop.
*/

#include<stdio.h>

int main()
{
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(int i = n; i>=1; i--)	
	{
		printf("%d\n",i);
	}
	return 0;
}
