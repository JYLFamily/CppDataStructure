/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MaxSubArray3.cpp 最大子列和_分治.cpp
 * Author: jiangyilan
 *
 * Created on 2019年2月28日, 上午10:19
 */

#include <iostream>

using namespace std;

/*
 * 使用分治实现最大子列和
 */

int TwoMax3(int a, int b) {
    if (a > b) return a;
    else return b;
}

int ThreeMax3(int a, int b, int c) {
    return TwoMax3(a, TwoMax3(b, c));
}

int DivideAndConquer3(int* arr, int left, int right) {
    int MaxLeftSum, MaxRightSum;
    int MaxLeftBorderSum, MaxRightBorderSum;
    int LeftBorderSum, RightBorderSum;
    int center, i;
    
    if (left == right) {
        if (arr[left] > 0) return arr[left];
        else return 0;
    }
    
    center = left + (right - left) / 2;
    MaxLeftSum = DivideAndConquer3(arr, left, center);
    MaxRightSum = DivideAndConquer3(arr, center + 1, right);
    
    MaxLeftBorderSum = 0; LeftBorderSum = 0;
    for (i = center; i >= left; i--) {
        LeftBorderSum += arr[i];
        if (LeftBorderSum > MaxLeftBorderSum) MaxLeftBorderSum = LeftBorderSum;
    }
    
    MaxRightBorderSum = 0; RightBorderSum = 0;
    for (i = center + 1; i <= right; i++) {
        RightBorderSum += arr[i];
        if (RightBorderSum > MaxRightBorderSum) MaxRightBorderSum = RightBorderSum;
    }
    
    return ThreeMax3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
}

int MaxSubseqSum3(int* arr, int size) {
    return DivideAndConquer3(arr, 0, size - 1);
}

int main(int argc, char** argv) {
    int arr[] = {-2, 6, -1, 5, 4, -7, 2, 3};
    cout << MaxSubseqSum3(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    
    return 0;
}

