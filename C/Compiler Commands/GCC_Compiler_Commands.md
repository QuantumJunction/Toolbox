# GCC compiler commands
This commands should fit to most compilers
## Defines for debug messages
`__FUNCTION__` - copies the name of the function at the place of this define
`__LINE__` - copies the line where this define is located
`__FILE__` - copies the name of the current file in place of the define

Example:
`int main ()
{
	printf("I am in function %s at line %d\n",__FUNCTION__,__LINE__);
	return 0;
}`
## Conditional compilation
`#if <condition> <code> #endif`- if the condition is true the code will be copmiled
`#ifdef <name of define> <code> #endif` - if the define exists the code will be compiled
`#ifndef <name of define> <code> #endif` - if the define does not exist the code will be compiled

## Pragmas
`#pragma message "Your Message"`- Show the message during compilation
`#pragma once`- protection of h file in case ot double inclution