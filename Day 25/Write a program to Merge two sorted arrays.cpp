#include <iostream>

void mergeSortedArrays(int arr1[], int n, int arr2[], int m, int result[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8, 10};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int result[n + m];

    mergeSortedArrays(arr1, n, arr2, m, result);

    for (int i = 0; i < n + m; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
