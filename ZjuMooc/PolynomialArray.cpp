/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PolynomialArray.cpp
 * Author: 15795
 *
 * Created on 2019年3月5日, 上午8:45
 */

#include <iostream>

using namespace std;

//struct Element {
//    int coef;
//    int expon;
//};

//int main(int argc, char** argv) {
//    struct Element arr1[] = {{26, 19}, {-4, 8}, {-13, 6}, {82, 0}};
//    struct Element arr2[] = {{9, 12}, {15, 8}, {3, 2}};
//    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
//    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
//    
//    int i = 0;  // 指向 arr1 数组元素, [0, i-1] 元素已使用 [i, sizof(arr1) / sizeof(arr1[0])] 元素未使用
//    int j = 0;  // 指向 arr2 数组元素, [0, j-1] 元素已使用 [j, sizof(arr2) / sizeof(arr2[0])] 元素未使用
//    while (i < arr1Size) {
//        if (j == arr2Size) {
//            cout << arr1[i].coef << " " << arr1[i].expon << endl;
//            i += 1;
//        }
//        else if (arr1[i].expon == arr2[j].expon) {  // 这里要使用 else if 衔接，原因在于 if 衔接可能导致一个循环有两个输出
//            cout << arr1[i].coef + arr2[j].coef << " " << arr1[i].expon << endl;
//            i += 1;
//            j += 1;
//        }
//        else if (arr1[i].expon > arr2[j].expon) {
//            cout << arr1[i].coef << " " << arr1[i].expon << endl;
//            i += 1;
//        }
//        else if (arr1[i].expon < arr2[j].expon) {
//            cout << arr2[j].coef << " " << arr2[j].expon << endl;
//            j += 1;
//        }
//    }
//    
//    return 0;
//}

