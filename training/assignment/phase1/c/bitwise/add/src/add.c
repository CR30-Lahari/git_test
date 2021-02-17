//! @file add.c
//! @author Lahari K
//! @date 27/10/2020
//! @brief function to add 2 numbers using bitwise operators

#include"../hdr/header.h"

int add(int num1, int num2)	/** @param num1
				* @param num2*/
{
	//!< variable to store the carry
	int carry;	
	while (num2 != 0)	{
		carry = num1 & num2;
		num1 = num1 ^ num2;	
		num2 = carry << 1;	
	}
	return num1;	//! @return sum
}

