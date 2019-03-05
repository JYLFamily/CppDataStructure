/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinearListArray.cpp
 * Author: 15795
 *
 * Created on 2019年3月5日, 上午10:44
 */

#include <iostream>
#define MAXSIZE 100000
using namespace std;

typedef int ElementType;
struct LNode {
	ElementType Data[MAXSIZE];
	int Last;
};
typedef struct LNode* List;

List MakeEmpty() {
    List PtrL = (List) malloc(sizeof(LNode));
    PtrL->Last = -1;

    return PtrL;
}

void Insert(ElementType X, int i, List PtrL) { // i 范围 [1, n + 1]
    if (PtrL->Last == MAXSIZE - 1) {
	cout << "表满" << endl;
	return; 
    }
	
    if (i < 1 || i > PtrL->Last + 2) {  // i 范围 [1, n + 1] === [0, Last + 1] === [1, Last + 2]
	cout << "位置不合法" << endl;
	return;
    }
	
    for (int j = PtrL->Last; j >= i - 1; j--) PtrL->Data[j + 1] = PtrL->Data[j];
    PtrL->Data[i - 1] = X;
    PtrL->Last += 1;

    return;
}

int Find(ElementType X, List PtrL) {
    int i = 0;
    while (i <= PtrL->Last && X != PtrL->Data[i]) i++;
    
    if (i > PtrL->Last) return -1;  // 未查得
    else return i;
}

void Delete(int i, List PtrL) {  // i 范围 [1, n]
    if (PtrL->Last == -1) {
	cout << "表空" << endl;
        return;
    }
	
    if (i < 1 || i > PtrL->Last + 1) {  // i 范围 [1, n] === [0, Last] === [1, Last + 1]
	cout << "位置不合法" << endl;
	return;
    }
	
    for (int j = i; j <= PtrL->Last; j++) PtrL->Data[j - 1] = PtrL->Data[j];
    PtrL->Last -= 1;
	
    return;	
}

int main(int argc, char** argv) {
    List PtrL = MakeEmpty();
    Insert(1, 1, PtrL);
    Insert(2, 2, PtrL);
    Insert(3, 3, PtrL);
    Insert(4, 4, PtrL);
    Insert(5, 5, PtrL);
    cout << Find(1, PtrL) << endl;
    Delete(1, PtrL);
    cout << Find(1, PtrL) << endl;
    
    return 0;
}

