/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PolynomialLinkedList.cpp
 * Author: 15795
 *
 * Created on 2019年3月5日, 上午9:38
 */

#include <iostream>

using namespace std;

typedef struct PolyNode *Polynomial;
struct PolyNode {
    int coef;
    int expon;
    Polynomial link;
};

int main(int argc, char** argv) {
    struct PolyNode list1Node1 = {26, 19, NULL};
    struct PolyNode list1Node2 = {-4, 8, NULL};
    struct PolyNode list1Node3 = {-13, 6, NULL};
    struct PolyNode list1Node4 = {82, 0, NULL};
    list1Node1.link = &list1Node2;
    list1Node2.link = &list1Node3;
    list1Node3.link = &list1Node4;
    
    struct PolyNode list2Node1 = {9, 12, NULL};
    struct PolyNode list2Node2 = {15, 8, NULL};
    struct PolyNode list2Node3 = {3, 2, NULL};
    list2Node1.link = &list2Node2;
    list2Node2.link = &list2Node3;
    
    // Polynomial 指向 PolyNode 的指针
    Polynomial node1 = &list1Node1;  // 指向 list1 元素指针
    Polynomial node2 = &list2Node1;  // 指向 list2 元素指针
    while (node1 != NULL) {
        if (node2 == NULL) {
            cout << (*node1).coef << " " << (*node1).expon << endl;
            node1 = (*node1).link;
        }
        else if ((*node1).expon == (*node2).expon) {
            cout << (*node1).coef + (*node2).coef << " " << (*node1).expon << endl;
            node1 = (*node1).link;
            node2 = (*node2).link;
        }
        else if ((*node1).expon > (*node2).expon) {
            cout << (*node1).coef << " " << (*node1).expon << endl;
            node1 = (*node1).link;
        }
        else if ((*node1).expon < (*node2).expon) {
            cout << (*node2).coef << " " << (*node2).expon << endl;
            node2 = (*node2).link;
        }
    }
           
    return 0;
}

