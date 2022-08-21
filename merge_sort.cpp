#include <iostream>

using namespace std;

void merge_sort(int arr[], int start, int size);

int main() {
  const int size = 20;
  int arr[size] = {19, 18, 1, 9, 16, 5, 3, 13, 8, 2, 12, 11, 4, 6, 14, 10, 17, 15, 7, 20};

  merge_sort(arr, 0, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << ",";
  }
  return 0;
}

void merge_sort(int arr[], int start, int size) {
  int mid;
  if (size % 2 != 0)
    mid = (size+1)/2;
  else 
    mid = size/2;

  if (mid > 1) {
    merge_sort(arr, start, mid);
    merge_sort(arr, start+mid, size-mid);
  }

  int *sorted = new int[size];
  int sIdx = 0;
  int i = start, i_max = start+mid;
  int j = start+mid, j_max = start+size;

  while (sIdx < size) {
    if (j >= j_max) {
      while (i < i_max) sorted[sIdx++] = arr[i++];
      break;
    } else if (i >= i_max) {
      while (j < j_max) sorted[sIdx++] = arr[j++];
      break;
    }

    if (arr[i] > arr[j]) {
      sorted[sIdx++] = arr[j++];
    } else if (arr[i] < arr[j]) {
      sorted[sIdx++] = arr[i++];
    } else {
      sorted[sIdx++] = arr[i++];
      sorted[sIdx++] = arr[j++];
    }
  }

  for (int i = 0; i < size; ++i) {
    arr[start+i] = sorted[i];
  }

  delete sorted;
}
