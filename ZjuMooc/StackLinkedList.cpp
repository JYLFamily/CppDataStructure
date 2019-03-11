/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StackLinkedList.cpp
 * Author: 15795
 *
 * Created on 2019年3月10日, 下午4:55
 */

#include <iostream>
#define ERROR -999999
using namespace std;

//typedef int ElementType;
//typedef struct SNode* Stack;
//struct SNode {
//    ElementType Data;
//    Stack Next;
//};
//
//Stack CreateStack() {
//    Stack PtrS = (Stack) malloc(sizeof(SNode));
//    PtrS->Next = NULL;
//
//    return PtrS;
//}
//
//int IsEmpty(Stack PtrS) {
//    if (PtrS->Next == NULL) return 1;  // 已空
//    else return 0;  // 未空
//}
//
//void Push(ElementType item, Stack PtrS) {
//    Stack TmpCell = (Stack) malloc(sizeof(SNode));
//    TmpCell->Data = item;
//    TmpCell->Next = PtrS->Next;
//    PtrS->Next = TmpCell; 
//}
//
//ElementType Pop(Stack PtrS) {
//    if (IsEmpty(PtrS) == 1) {
//        cout << "已空" << endl;
//        return ERROR;
//    }
//    
//    Stack TopCell = PtrS->Next;
//    ElementType TopData = TopCell->Data;
//    PtrS->Next = TopCell->Next;
//    free(TopCell);
//    
//    return TopData;
//}
//
//int main(int argc, char** argv) {
//    Stack PtrS = CreateStack();
//    for (int i = 0; i < 3; i++) Push(i, PtrS);
//    while (IsEmpty(PtrS) != 1) cout << Pop(PtrS) << " ";
//    
//    return 0;
//}



