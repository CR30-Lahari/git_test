//! @file validation.c
//! @author Lahari K
//! @date 27/10/2020
//! @brief C function to validate a number whether it is integer or not

#include"../hdr/header.h"

int validate(int len, char number[len]) /** @param len
					  * @param number[len]*/
{
	//!<variable used inside loop
	int i;	
	//!<variable which determines whether the passed number is integer or not
	int flag = 0;	
	for(i=0; i<len; i++) {
		if ( !((isdigit(number[i])) || number[i] == '\n') 
			|| number[0] == '\n') {
			flag = 0;
			break;
		} else {
			flag = 1;
		}
	}
	return flag;	//! @return flag, success or failure status
}
	
