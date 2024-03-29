#include"sorting.h"
int main() {
    const int size = 20000;
    int* arr1 = (int*)malloc(size * sizeof(int));
    int* arr2 = (int*)malloc(size * sizeof(int));

    // Generating random number
    srand(time(0));
    int random_num = rand() % 10000;

    // Filling arrays with the same random number
    for (int i = 0; i < size; ++i) {
        arr1[i] = random_num;
        arr2[i] = random_num;
    }

    clock_t startTime = clock();
    bubbleSort(arr1, size);
    clock_t endTime = clock();
    double bubbleSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    startTime = clock();
    heapSort(arr2, size);
    endTime = clock();
    double heapSortTime = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("Bubble Sort Time: %f seconds\n", bubbleSortTime);
    printf("Heap Sort Time: %f seconds\n", heapSortTime);

    // Insert breakpoint here to examine the sorted arrays in the debugger

    // Free dynamically allocated memory
    free(arr1);
    free(arr2);

    return 0;
}
