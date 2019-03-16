/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueArrayCircular.cpp
 * Author: 15795
 *
 * Created on 2019年3月12日, 上午10:34
 */

#include <iostream>
#define MAXSIZE 100000
#define ERROR -999999
using namespace std;

//typedef int ElementType ;
//struct QNode {
//    ElementType Data[MAXSIZE];
//    int Front;  // 队首指针，指向队首元素 + 1
//    int Rear;  // 队尾指针，指向队尾元素
//};
//typedef struct QNode* Queue;
//
//Queue CreateQueue() {
//    Queue PtrQ = (Queue) malloc(sizeof(QNode));
//    PtrQ->Front = 0;
//    PtrQ->Rear = 0;
//    
//    return PtrQ;
//}
//
//int IsFull(Queue PtrQ) {
//    if ((PtrQ->Rear + 1 % MAXSIZE) == 0) return 1;  // 已满
//    else return -1;  // 未满
//}
//
//int IsEmpty(Queue PtrQ) {
//    if (PtrQ->Rear == PtrQ->Front) return 1;  // 已空
//    else return -1;  // 未空
//}
//
//void AddQ(ElementType item, Queue PtrQ) {
//    if (IsFull(PtrQ) == 1) {
//        cout << "已满" << endl;
//        return;
//    }
//    PtrQ->Rear = (PtrQ->Rear + 1) % MAXSIZE;
//    PtrQ->Data[PtrQ->Rear] = item;
//}
//
//ElementType DeleteQ(Queue PtrQ) {
//    if (IsEmpty(PtrQ) == 1) {
//        cout << "已空" << endl;
//        return ERROR;
//    }
//
//    PtrQ->Front = (PtrQ->Front + 1) % MAXSIZE;
//    ElementType Tmp = PtrQ->Data[PtrQ->Front]; 
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

