#include <iostream>
/* 初始化数组 */
// 存储在栈上
int arr[5];
int nums[5] = { 1, 3, 2, 5, 4 };
// 存储在堆上（需要手动释放空间）
int* arr1 = new int[5];
int* nums1 = new int[5] { 1, 3, 2, 5, 4 };

int main(int argc, char const* argv[]) {
    std::cout << *arr1 << '\n';
    delete arr1;
    std::cout << *arr1 << '\n';
    return 0;
}
