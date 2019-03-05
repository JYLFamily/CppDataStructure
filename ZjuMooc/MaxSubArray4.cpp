/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MaxSubArray4.cpp 最大子列和_在线处理.cpp
 * Author: jiangyilan
 *
 * Created on 2019年2月28日, 上午10:53
 */

#include <iostream>

using namespace std;

/*
 * 
 */

//int OnlineProcess(int* arr, int size) {
//    int ThisSum = 0;  //  当前子列和
//    int MaxSum = 0;  // 最大子列和
//    
//    for (int i = 0; i < size; i++) {
//        ThisSum += arr[i];
//        
//        if (ThisSum > MaxSum) MaxSum = ThisSum;
//        if (ThisSum < 0) ThisSum = 0;  // 当前子列和为负，不需要考虑
//    }
//    
//    return MaxSum;
//}

//int main(int argc, char** argv) {
//    int arr[] = {-2, 6, -1, 5, 4, -7, 2, 3};
//    cout << OnlineProcess(arr, sizeof(arr)/sizeof(arr[0])) << endl;
//    
//    return 0;
//}

