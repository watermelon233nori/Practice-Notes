#include <stdio.h>
#include <stdbool.h>

void print_array(int* arr, int len, bool endl) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    if (endl) printf("\n");
}

void swap(int* a, int* b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void sort(int* nums, int n) {
    int* min = nums;
    for (int i = 0; i < n - 1; ++i) {
        min = nums + i;
        for (int j = i; j < n; ++j) {
            if (nums[j] < *min) min = nums+j;
        }
        swap(nums + i, min);
    }
}

int main() {
    int nums[6] = { 4,1,3,1,5,2 };
    print_array(nums, 6, true);
    sort(nums, 6);
    print_array(nums, 6, true);
}
