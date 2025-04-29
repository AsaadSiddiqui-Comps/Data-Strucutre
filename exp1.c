#include <stdio.h>

void insert(int arr[], int * n, int pos, int val) {
  if (pos < 0 || pos > *n) {
    printf("Invalid insertion position.\n");
    return;
  }
  for (int i = * n; i > pos; i--)
    arr[i] = arr[i - 1];
  arr[pos] = val;
  ( * n) ++;
}

void delete(int arr[], int * n, int pos) {
  if (pos < 0 || pos >= *n) {
    printf("Invalid deletion position.\n");
    return;
  }
  for (int i = pos; i < * n - 1; i++)
    arr[i] = arr[i + 1];
  ( * n) --;
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[100], n, pos, val, choice;
  printf("Enter number of elements: ");
  scanf("%d", & n);
  printf("Enter elements: ");
  for (int i = 0; i < n; i++)
    scanf("%d", & arr[i]);

  printf("Choose operation: 1-Insertion 2-Deletion: ");
  scanf("%d", & choice);

  if (choice == 1) {
    printf("Enter position and value: ");
    scanf("%d %d", & pos, & val);
    insert(arr, & n, pos, val);
  } else if (choice == 2) {
    printf("Enter position to delete: ");
    scanf("%d", & pos);
    delete(arr, & n, pos);
  }

  display(arr, n);
  return 0;
}
