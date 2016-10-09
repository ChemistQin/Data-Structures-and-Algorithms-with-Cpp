//
//  Sort.h
//  Sort
//
//  Created by 覃思平 on 2016/10/9.
//  Copyright © 2016年 覃思平. All rights reserved.
//
//  Sorting algorithm
//  几种排序算法稳定的排序
/*冒泡排序（bubble sort）— O(n2)
  插入排序（insertion sort）—O(n2)
  鸡尾酒排序（cocktail sort）—O(n2)
  桶排序（bucket sort）—O(n)；需要O(k)额外空间
  计数排序（counting sort）—O(n+k)；需要O(n+k)额外空间
  归并排序（merge sort）—O(n log n)；需要O(n)额外空间
  原地归并排序— O(n log2 n)如果使用最佳的现在版本
  二叉排序树排序（binary tree sort）— O(n log n)期望时间；O(n2)最坏时间；需要O(n)额外空间
  鸽巢排序（pigeonhole sort）—O(n+k)；需要O(k)额外空间
  基数排序（radix sort）—O(n·k)；需要O(n)额外空间
  侏儒排序（gnome sort）— O(n2)
  图书馆排序（library sort）— O(n log n)期望时间；O(n2)最坏时间；需要(1+ε)n额外空间
  块排序（block sort）— O(n log n)

    不稳定的排序
  选择排序（selection sort）—O(n2)
  希尔排序（shell sort）—O(n log2 n)如果使用最佳的现在版本
  Clover排序算法（Clover sort）—O(n)期望时间，O(n2)最坏情况
  梳排序— O(n log n)
  堆排序（heap sort）—O(n log n)
  平滑排序（smooth sort）— O(n log n)
  快速排序（quick sort）—O(n log n)期望时间，O(n2)最坏情况；对于大的、随机数列表一般相信是最快的已知排序
  内省排序（introsort）—O(n log n)
  耐心排序（patience sort）—O(n log n + k)最坏情况时间，需要额外的O(n + k)空间，也需要找到最长的递增子序列（longest increasing subsequence）
  ~Reference:wikipedia
*/



#ifndef Sort_h
#define Sort_h


using namespace std;

//冒泡排序
void BubbleSort(vector<int> &nums){
    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = 0; j < nums.size() - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

//插入排序，主要思想在把数组从左到右分为有序区和无序区。从无序区中取出元素插入有序区中，与扑克牌类似。
void InsertSort(vector<int> &nums){
    for (int i = 1; i < nums.size(); i++) {  //刚开始时，默认a[0]为有序
        for (int j = i; j > 0; j--) {
            if (nums[j] < nums[j - 1]) {     //无序区从a[j]开始，用其与有序区元素比较，若小则交换
                int temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
            }
        }
    }
}

//希尔排序
void ShellSort(vector<int> &nums){
    for (int gap = nums.size() >> 1; gap > 0; gap >>= 1) { // >>1 位运算，将数的二进制表示右移一位，相当于除以二
        for (int i = gap; i < nums.size(); i++) {
            int temp = nums[i];
            
            int j = i - gap;
            for (; j >= 0 && nums[j] > temp; j -= gap) {
                nums[j + gap] = nums[j];
            }
            
            nums[j + gap] = temp;
        }
    }
}

#endif /* Sort_h */