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
                     proper type casting is not possible/done.
                     this type of fault will ususally occurs when invalid format of data for a variable.
                     
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
  problems:
  1.evenOr odd with out conditions and with conditons
  2.Spy numbers
  3.swapping without temporary varaible
  4.velocity
  5.speed calculator
  6.sum of n numbers
  7.factorial
  8.Reverse of a numuber
  9.datatypes
_______________________________________________________________________________________________________________________________________________________
Date:29/07/2025
                                                  Data types
                                                       |
                ____________________________________________________________________________________
                |                                                                                   |
    premitive/predefined datatypes                                                    non-primitive/user-defined data types
                |                                                                                         |
  _________________________________________________                                  _____________________________________________________
  |                       |                        |                                 |                          |                        |
  Number              Character                Boolean                             String                   Arrays                  Pointers
  |-Interger            |-char(%c)            |-bool (%d)                       char Name[6]
    -auto-int(%i)                                                                  (%s)
    -unsignedInt(%u)                                                               string
    -int(%d)                                                                       char var[n] (%s)
    -long(%ld)
  |-Floating
    -float(%f)
    -double(%lf)
  ___________________________________________________________________________________________________________________________________________________
   Operators in C:                    min -> max
  ___________________________________________________________________________________________________________________________________________________
  1.Arithematic operators       ->  (   -    +  )  ( *    %    /  )
 
  2.Unary operators             ->   increament { var++     ++var }     decreament  {  var--   --var   }

  3.Assignment operators        ->   =   -=    +=    *=    %=   /=

  4.Relational operators        ->   ==   !=    <    >    >=    <=           (comparision operators)

  5.Logical operators           ->    && -> AND         || -> OR       ! -> NOT  

  6.Bitwise operators           ->   &    |     ~     ^
  
  7.Shift operators             ->  RIGHT var>>n  LEFT var<<n   n->number of bits to shift

  8.Ternary operators           ->   (condition) ? (if true this is executed) : (else this statement is executed)
                                    (conditional operators orsingle line conditional statement)

  9.Common operators            ->   . , " ; ( ) & *  % [ ] sizeof()  ___________________________________________________________________________________________________________________________________________________
  =>64+23*3/9-12= 59.6
  =>age =29
  age after 1 year  ++age
  age before 1 year --age
  unary one increament or decreament by 1
  => int x=3;
     int result = ++x + ++x  + ++x - --x - --x + --x;
     result =14
  =>x=3,y=4
    ++x + y++ - x-- + y-- + x++ + --y  + x + y  => 22


  => a=0 !a=1
     b=1 !b=0
     a      b        &      |      ^
     0      0        0      0      0
     0      1        0      1      1
     1      0        0      1      1
     1      1        1      1      0
_____________________________________________________________________________________________________________________________________________________
  Problems:
  1.Simple interest
  2.Greatest among three numbers
    with logical and ternary operator
  3.finding alpha numeric
  4.armstrong
  5.fibonacci
