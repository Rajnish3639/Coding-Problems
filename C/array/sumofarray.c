#include<stdio.h>

void calculate_sum(int *arr, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  
  calculate_sum(arr, size);
  
  return 0;
}

void calculate_sum(int *arr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += *(arr + i);
  }
  printf("Sum: %d\n", sum);
}
