/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackArray.cpp
 * Author: 15795
 *
 * Created on 2019年3月8日, 下午5:27
 */

#include <iostream>
#include <math>
#define MAXSIZE 100000
#define ERROR -999999
using namespace std;

//typedef int ElementType;
//struct SNode {
//    ElementType Data[MAXSIZE];
//    int Top;
//};
//typedef struct SNode* Stack;
//
//Stack CreateStack() {
//    Stack PtrS = (Stack) malloc(sizeof(SNode));
//    PtrS->Top = -1;
//    
//    return PtrS;
//}
//
//int IsFull(Stack PtrS) {
//    if (PtrS->Top ==  MAXSIZE - 1) return 1;  // 已满
//    else return 0;  // 未满 
//}
//
//int IsEmpty (Stack PtrS) {
//    if (PtrS->Top ==  -1) return 1;  // 已空
//    else return 0;  // 未空 
//}
//
//void Push(Stack PtrS, ElementType item) {
//    if (IsFull(PtrS) == 1) {
//        cout << "已满" << endl;
//        
//        return; 
//    }
//    else {
//        PtrS->Data[++(PtrS->Top)] = item;  // ++i 表达式的值使用之前 + 1 
//        
//        return;
//    }
//}
//
//ElementType Pop(Stack PtrS) {
//    if (IsEmpty(PtrS) == 1) {
//        cout << "已空" << endl;
//        
//        return ERROR; 
//    }
//    else {
//        return PtrS->Data[(PtrS->Top)--];  // i-- 表达式的值使用之后 - 1 
//    }
//}
//
//int main(int argc, char** argv) {
//    Stack PtrS = CreateStack();
//    for (int i = 0; i < 3; i++) Push(PtrS, i);
//    for (int i = PtrS->Top; i != -1; i--) cout << Pop(PtrS) << " ";
//  
//    return 0;
//}

