#include <stdarg.h>
#include<stdio.h>
/*
OVERVIEW: 	A school has unknown number of students. Write a function that takes a variable number of arguments representing student marks in english
and returns the number of students who scored > 90 marks.
E.g.: variableArguments(3, 20, 90, 98) returns 1. One value (98) is greater than 90.

INPUTS: 	First argument is number (arg_count) of student marks followed by "arg_count" number of arguments.
E.g.: If first argument to function is 5, total number of arguments to function will be 6 (1 + 5).

OUTPUT: 	Returns the number of students who scored > 90 marks.

ERROR CASES:

NOTES: 		use stdarg.h header.
*/

int variableArguments(int arg_count, ...)
{
	va_list arg_list;
	int arg,count=0,loop=1;
	va_start(arg_list, arg_count);
	for (arg = va_arg(arg_list, int); loop <= arg_count; arg = va_arg(arg_list, int))
	{
		loop ++ ;
		if (arg > 90)
		{
			count++;
		}
		
	}
	va_end(arg_list);
	return count;
}