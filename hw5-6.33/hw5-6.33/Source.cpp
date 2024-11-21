#include <stdio.h>

int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; 
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; 
    }
    else if (key < array[mid]) {
        return binarySearch(array, start, mid - 1, key); 
    }
    else {
        return binarySearch(array, mid + 1, end, key); 
    }
}

int main() {
    int array[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int size = sizeof(array) / sizeof(array[0]);
    int key = 7;

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("找到 %d，索引為 %d\n", key, result);
    }
    else {
        printf("未找到 %d\n", key);
    }

    return 0;
}
