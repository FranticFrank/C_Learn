#include <stdio.h>

// 计算数组元素的和
int array_sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// 计算数组元素的平均值
float array_average(int arr[], int size) {
    int total = array_sum(arr, size);
    return (float)total / size;//注意要进行强制类型转换
}

// 找出数组中的最大值和最小值
void find_max_min(int arr[], int size, int *max_value, int *min_value) {
    *max_value = arr[0];
    *min_value = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_value) {
            *max_value = arr[i];
        }
        if (arr[i] < *min_value) {
            *min_value = arr[i];
        }
    }
}

// 将两个数组对应位置的元素相加
void add_arrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

// 数组元素的乘法
void multiply_array(int arr[], int size, int multiplier, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * multiplier;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int result[5]; // 用于存储运算结果
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int max_value, min_value;

    // 计算数组元素的和
    printf("Sum of array elements: %d\n", array_sum(arr1, size));

    // 计算数组元素的平均值
    printf("Average of array elements: %.2f\n", array_average(arr1, size));

    // 找出数组中的最大值和最小值
    find_max_min(arr1, size, &max_value, &min_value);
    printf("Max value in array: %d\n", max_value);
    printf("Min value in array: %d\n", min_value);

    // 将两个数组对应位置的元素相加
    add_arrays(arr1, arr2, result, size);
    printf("Sum of arrays: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // 数组元素的乘法
    multiply_array(arr1, size, 2, result);
    printf("Array elements multiplied by 2: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
