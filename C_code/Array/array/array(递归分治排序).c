#include <stdio.h>

// 合并两个已排序的子数组
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;   // 左侧子数组的大小
    int n2 = high - mid;      // 右侧子数组的大小

    // 创建临时数组存储子数组
    int L[n1], R[n2];

    // 将数据复制到临时数组中
    for (int i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 合并临时数组到原数组中
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 将剩余元素复制到原数组中
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 归并排序函数
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // 递归地对左右子数组进行排序
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // 合并排序后的子数组
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 调用归并排序函数
    mergeSort(arr, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
