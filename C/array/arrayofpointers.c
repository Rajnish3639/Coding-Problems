#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20, num3 = 30;
  int *ptrArr[3];  // array of three integer pointers

  ptrArr[0] = &num1;  // assign addresses of variables to array elements
  ptrArr[1] = &num2;
  ptrArr[2] = &num3;

  for (int i = 0; i < 3; i++) {
    printf("Value of variable %d: %d\n", i+1, *(ptrArr[i]));
  }

  return 0;
}
