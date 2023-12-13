//
// Created by Loh Jian Rong on 13/12/23.
//

#ifndef FAST_LIMIT_ORDER_ORDER_H
#define FAST_LIMIT_ORDER_ORDER_H


#include "Order.h"

class Limit {
private:
    float price;
    int size;
    Limit *parent;
    Limit *leftChild;
    Limit *rightChild;
    Order *headOrder;
    Order *tailOrder;

public:
    Limit();

    void leftRotate();
    void rightRotate();
};


#endif //FAST_LIMIT_ORDER_LIMIT_H
