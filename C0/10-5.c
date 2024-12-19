#include <stdio.h>

void print_arr(int *arr) {
  int i;
  for (i = 0; i < 5; i++) printf("%d ", arr[i]);
  ;
}

int main() {
  int arr[5] = {10, 20, 30, 40, 50};
  print_arr(arr);
}