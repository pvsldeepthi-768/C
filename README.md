Date:15/07/2025
c-structure
Introduction to C
________________________________________________________________________________________________________________________________
#include <stdio.h> //header file
/*
#-preprocessing directory includer 
stdio.h is a header (standard input output header)
math.h is used for math operations
*/
//int or void is used to to mention main function mostly int is used it returns a integer at the end of the main function
int main(){
  //block of statements
  //every statement must end with semicolon ';'
  return 0;
}
_______________________________________________________________________________________________________________________________
1.variables and data types:
  variables are the storage containers of data or values with their specified data type.
  data types are the nature or type of values used.
  variable name:(identifiers)
  labels of the values which helps in reference to a variable.
  any data is accessed through either by name or memory location.
  names are the primary refernce to access data in a program 
  data types are defined to allow a specific type of data to be stored in a variable or any structure.
____________________________________________________________________________________________________________________________
  types:                       sizes        format specifier
  int -integer                 4 bytes            %d
  char-character               1 bytes            %c
  float - decimal              4 bytes            %f
  
  double - large decimal       8 bytes            %lf
____________________________________________________________________________________________________________________________
  int var1=2;
  char var2;
  printf()- function to print in the console    - printf("Text:%c",var1);
  scanf()- funcion to take input from console   - scanf("%d",&var2);
  if wont assign any values it takes some garbage values.
____________________________________________________________________________________________________________________________
  segmentation error:scanf having different input values and reference variables
  integers->  %d - decimal integers
              %i - auto intergers
              %u - unsigned 
  floating->
  %f -> 6 decimal points
  %lf -> more than 6 decimals
  %s  -> string (character array )  ---> scanf doesnot require & for string 
  1 bit = 0 or 1
  1 byte = 8 bits
  1 nibble =4 bits

