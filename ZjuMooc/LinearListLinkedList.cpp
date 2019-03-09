/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinearListLinkedList.cpp
 * Author: 15795
 *
 * Created on 2019年3月7日, 上午8:59
 */

#include <iostream>
using namespace std;

//typedef int ElementType;
//typedef struct LNode* List;
//struct LNode {
//    ElementType Data;
//    List Next;
//};
//
//List InitLinkedList();
//int Length(List PtrL);
//List Insert(ElementType X, int i, List PtrL);
//List Find(ElementType X, List PtrL);
//List FindKth(int K, List PtrL);
//List Delete(int i, List PtrL);
//
//List InitLinkedList() {
////    [Warning] address of local variable 'result' returned [-Wreturn-local-addr]
////    struct LNode node1 = {1, NULL};
////    struct LNode node2 = {2, NULL};
////    struct LNode node3 = {3, NULL};
////    struct LNode node4 = {4, NULL};
////    struct LNode node5 = {5, NULL};
////    node1.Next = &node2;
////    node2.Next = &node3;
////    node3.Next = &node4;
////    node4.Next = &node5;
////    
////    return &node1;
//    
//    List PtrL1 = (List) malloc(sizeof(LNode));
//    List PtrL2 = (List) malloc(sizeof(LNode));
//    List PtrL3 = (List) malloc(sizeof(LNode));
//    List PtrL4 = (List) malloc(sizeof(LNode));
//    List PtrL5 = (List) malloc(sizeof(LNode));
//    PtrL1->Data = 1;
//    PtrL2->Data = 2;
//    PtrL3->Data = 3;
//    PtrL4->Data = 4;
//    PtrL5->Data = 5;
//    PtrL1->Next = PtrL2;
//    PtrL2->Next = PtrL3;
//    PtrL3->Next = PtrL4;
//    PtrL4->Next = PtrL5;
//    PtrL5->Next = NULL;
//    
//    return PtrL1;
//}
//
//int Length(List PtrL) {
//    List p = PtrL;
//    int counter = 0;
//    
//    while (p != NULL) {
//        counter += 1;
//        p = p->Next;
//    }
//    
//    return counter;
//}
//
///* 插入成功返回链表新表头指针，否则返回 NULL */
//List Insert(ElementType X, int i, List PtrL) {
//    List p; // 指向第 i - 1 个节点
//    List s; // 指向插入节点
//    
//    /* 插入节点位置 == 1 */
//    if (i == 1) {  
//        s = (List) malloc(sizeof(LNode));
//        s->Data = X;
//        s->Next = PtrL;
//        
//        return s;
//    }
//    
//    /* 插入节点位置 ！= 1 */
//    p = FindKth(i - 1, PtrL);  
//    if (p == NULL) {
//        cout << "位置不合法" << endl;
//        return NULL;
//    }
//    else {
//        s = (List) malloc(sizeof(LNode));
//        s->Data = X;
//    
//        s->Next = p->Next;
//        p->Next = s;
//    
//        return PtrL;
//    }
//}
//
//List Find(ElementType X, List PtrL) {  // 查找指定元素 X，未查得 return NULL
//    List p = PtrL;
//    
//    while (p != NULL && p->Data != X) p = p->Next;
//    
//    return p;
//}
//
//List FindKth(int K, List PtrL) {  // 查找第 K 个元素，未查得 return NULL，注意与 Array 实现的区别
//    List p = PtrL;
//    int i = 1;
//    
//    while (p != NULL && i < K) {
//        p = p->Next;
//        i += 1;
//    }
//    
//    if (i == K) return p;
//    else return NULL;
//}
//
//List Delete(int i, List PtrL) {
//    List p;  // 指向第 i - 1 个节点
//    List s;  // 指向删除节点
//    
//    if (i == 1) {
//        s = PtrL;
//        if (PtrL != NULL) return PtrL->Next;
//        else return NULL;
//        free(s);
//        
//        return PtrL;
//    }
//    
//    p = FindKth(i - 1, PtrL);
//    if (p == NULL) {
//        cout << "位置不合法" << endl;
//        return NULL;
//    }
//    else if (p->Next == NULL) {
//        cout << "位置不合法" << endl;
//        return NULL;
//    }
//    else {
//        s = p->Next;
//        p->Next = s->Next;
//        free(s);
//        
//        return PtrL;
//    }
//}
//
//int main(int argc, char** argv) {
//    List PtrL = InitLinkedList();
//    PtrL = Insert(6, 6, PtrL);
//    cout << Length(PtrL) << endl;
//    PtrL = Delete(6, PtrL);
//    cout << Length(PtrL) << endl;
//    
//    return 0;
//}

