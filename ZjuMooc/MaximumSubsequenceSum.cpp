/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MaximumSubsequenceSum.cpp
 * Author: 15795
 *
 * Created on 2019年3月4日, 下午6:07
 */

#include <iostream>
#define MAX 100000
using namespace std;

//void OnlineProcess(int* arr, int size) {
//    int TheSum = 0;  // 当前子列和
//    int MaxSum = -1; // 最大子列和，负数与零条件，使用 -1 初始化
//    
//    int left = arr[0];  // 下一个可能 > MaxSum 的子列的开始元素
//    int leftMax = arr[0];  // 最大子列和开始元素
//    int rightMax = arr[size - 1];  // 最大子列和结束元素
//    
//    for (int i = 0; i < size; i++) {
//        TheSum += arr[i];
//        
//        if (TheSum > MaxSum) {
//            MaxSum = TheSum;
//            leftMax = left;
//            rightMax = arr[i];
//        }
//        
//        if (TheSum < 0 && i != size - 1) {  // 当前子列不可能 > MaxSum
//            TheSum = 0;
//            left = arr[i + 1];
//        }
//    }
//    
//    /* MaxSum == 0 情况 负数与零 */
//    if (MaxSum >= 0) cout << MaxSum << " " << leftMax << " " << rightMax;  
//    else cout << 0 << " " << arr[0] << " " << arr[size - 1]; 
//}

//int main(int argc, char** argv) {
//    int num;
//    cin >> num;
//    
//    int arr[MAX];
//    for (int i = 0; i < num; i++) cin >> arr[i];
//    
//    OnlineProcess(arr, num);
//    
//    return 0;
//}

