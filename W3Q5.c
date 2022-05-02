#include <stdio.h>

int main() {
  int n;
  int arr[100];
  printf("Enter the number of elements\n");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d:\n ", i + 1);
    scanf("%d", &arr[i]);
  };

  
  for (int i = 0; i < n; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d\n", arr[0]);

  return 0;
}
