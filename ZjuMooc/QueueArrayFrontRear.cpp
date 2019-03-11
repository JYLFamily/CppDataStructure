/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QueueArrayFrontRear.cpp
 * Author: 15795
 *
 * Created on 2019年3月11日, 上午9:26
 */

#include <iostream>
#define MAXSIZE 100000
#define ERROR -999999
using namespace std;

typedef int ElementType;
struct QNode {
    ElementType Data[MAXSIZE];
    int front;  // 队首指针，指向队首元素
    int rear;  // 队尾指针，指向队尾元素 + 1
};
typedef struct QNode* Queue;

Queue CreateQueue() {
    Queue PtrQ = (Queue) malloc(sizeof(QNode));
    PtrQ->front = 0;
    PtrQ->rear = 0;
    
    return PtrQ;
}

int IsFull(Queue PtrQ) {
    if (PtrQ->rear == MAXSIZE) return 1;  // 已满
    else return -1;  // 未满
}

int IsEmpty(Queue PtrQ) {
    if (PtrQ->front >= PtrQ->rear) return 1;  // 已空
    else return -1;  // 未空
}

void AddQ(ElementType item, Queue PtrQ) {
    if (IsFull(PtrQ) == 1) {
        cout << "已满" << endl;
        
        return;
    } 
    
    PtrQ->Data[(PtrQ->rear)++] = item;
}

ElementType DeleteQ(Queue PtrQ) {
    if (IsEmpty(PtrQ) == 1) {
        cout << "已空" << endl;
        
        return ERROR;
    }     
            
    return PtrQ->Data[(PtrQ->front)++];
}


int main(int argc, char** argv) {
    Queue PtrQ = CreateQueue();
    for (int i = 0; i < 3; i++) AddQ(i, PtrQ);
    while (IsEmpty(PtrQ) != 1) cout << DeleteQ(PtrQ) << " ";  
    
    return 0;
}

