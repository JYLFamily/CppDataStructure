/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueArray.cpp
 * Author: 15795
 *
 * Created on 2019年3月11日, 上午8:48
 */

#include <iostream>
#define MAXSIZE 100000
#define ERROR -999999
using namespace std;

//typedef int ElementType;
//struct QNode {
//    ElementType Data[MAXSIZE];
//    int Last;  // 队尾指针
//};
//typedef struct QNode* Queue;
//
//Queue CreateQueue() {
//    Queue PtrQ = (Queue) malloc(sizeof(QNode));
//    PtrQ->Last = -1;
//    
//    return PtrQ;
//}
//
//int IsFull(Queue PtrQ) {
//    if (PtrQ->Last == MAXSIZE - 1) return 1;  // 已满
//    else return -1;  // 未满
//}
//
//int IsEmpty(Queue PtrQ) {
//    if (PtrQ->Last == -1) return 1;  // 已空
//    else return -1;  // 未空
//}
//
//void AddQ(ElementType item, Queue PtrQ) {
//    if (IsFull(PtrQ) == 1) {
//        cout << "已满" << endl;
//        
//        return;
//    } 
//    
//    PtrQ->Data[++(PtrQ->Last)] = item;
//}
//
//ElementType DeleteQ(Queue PtrQ) {
//    if (IsEmpty(PtrQ) == 1) {
//        cout << "已空" << endl;
//        
//        return ERROR;
//    }     
//    
//    ElementType Tmp = PtrQ->Data[0];
//    for (int i = 1; i <= PtrQ->Last; i++) PtrQ->Data[i - 1] = PtrQ->Data[i];
//    PtrQ->Last -= 1;
//            
//    return Tmp;
//}
//
//int main(int argc, char** argv) {
//    Queue PtrQ = CreateQueue();
//    for (int i = 0; i < 3; i++) AddQ(i, PtrQ);
//    while (IsEmpty(PtrQ) != 1) cout << DeleteQ(PtrQ) << " ";       
//    
//    return 0;
//}

