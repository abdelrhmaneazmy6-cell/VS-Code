#include <stdio.h>

int main(void){

  int num1, num2, result;
  char operation;
  // ask the user for the first number?
  printf("Enter the first number: ");
  scanf("%i", &num1);

  // ask the user for the operation?
  printf("Enter the operation: ");
  scanf(" %c", &operation);

  // ask the user for the second number?
  printf("Enter the second number: ");
  scanf("%i", &num2);

// make the case of chooses for 'operation' because its the variable here + or - or * or /

switch (operation)
{ 
    // first case if the operation was +
    // make a variable for the result 
    case '+':
    result = num1 + num2;
    printf("The answer is : %i", result);
    break;

    // second case is the operarion was -
    // make a variable for the result
    case '-':
    result = num1 - num2;
    printf("The answer is : %i", result);
    break;

    // third case if the operation was *
    // make a variable for the result
    case '*':
    result = num1 * num2;
    printf("The answer is : %i", result);
    break;

    // fourth case if the operation was /
    // make a variable for the result
    case '/':
    result = num1 / num2;
    printf("The answer is : %i", result);
    break;

    default:
printf("There is something wrong");
}


}






