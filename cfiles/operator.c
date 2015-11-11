/*Operators

Arithmetic Operators
  binary operators
    +,-, *, / % ^
    ex: 2 + 3
  Uniary operators
    +, -
    ex: +2, -3

  Increment and decrement operators
    ++, --
      prefix and postfix
        ex: ++3, --1
        ex: 2++, 3--
Relational Operators
  <, >, <=, >= ==
  ex 2 < 3, 3>5
logicl Operators
  and -> &&
  or  -> ||
  not -> !

  p q p&&q    p q P||q
  0 0 0       0 0   0
  0 1 0       0 1   1
  1 0 0       1 0   1
  1 1 1       1 1   1
Bitwise operators
?
& and *
*/

/*  how to program

1. understand the question.
2. indentify the data and the type of data
3. perform business logic
4. print the result.
*/


//WAP to add 2 integer numbers and print the result to the console.
#include<stdio.h>

int main()
{
    int a, b;
    int res;
    int c = -2;


    printf("Enter first operand: ");
    scanf("%d", &a );//syntax for scanf(): scanf("<formt string>", &<variable_name>); format string: %d %f, %c, %x

    printf("\nEnter second operand: ");
    scanf("%d", &b);

    res = a / b;


    printf("Result: %d\n", (res));

    printf("Testing program if it executes properly...");
    return 0;
}
