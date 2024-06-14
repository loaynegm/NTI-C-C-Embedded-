/*
 * Task6.c
 *
 *  Created on: Feb 11, 2024
 *      Author: loay_negm
 
	C program to count number of digits in an integer.
*/

#include<stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter The Number: ");
	scanf("%d",&n);
	while(n != 0)
	{
		sum ++;
		n/=10;
	}
	printf("number of digits = %d\n",sum);
	return 0;
}
