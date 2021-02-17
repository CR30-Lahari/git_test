//! @file main.c
//! @author Lahari K
//! @date 27/10/2020
//! @brief C program to add 2 numbers using bitwise operations 

#include"../hdr/header.h"
int main()
{
	char num1[50]; /*!<variable to take input from user*/
	char num2[50]; /*!< variable to take input from user*/
	int res;	/*!< variable to store result from user*/
	int flag;	/*!< variable to store return value from user*/
	int num1_int;	/*!< variable to store input a integer*/
	int num2_int; /*!< variable to store input a integer*/
	do {
		printf("Enter valid 1st number : \n");	
		fgets(num1, 50, stdin);
		flag = validate (strlen(num1), num1);	//! pass length of num1 and num1 as argument to function validate
		if (!flag)
			printf("Invalid input \n");
	}while (!flag);

	do {
		printf("Enter valid 2nd number : \n");	
		fgets(num2, 50, stdin);
		flag = validate (strlen(num2), num2);	//! pass length of num2 and num2 as argument to function validate
		if (!flag)
			printf("Invalid input \n");
	} while (!flag);
	
	num1_int = atoi(num1);
	num2_int = atoi(num2);
	res = add(num1_int, num2_int);	//!function call to add function to add the 2 numbers using bitwise operators
	printf("%d + %d = %d\n", num1_int, num2_int, res);
	return 0; //! @return return 0 on success
}
