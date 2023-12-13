//
// Created by Loh Jian Rong on 13/12/23.
//

#ifndef FAST_LIMIT_ORDER_ORDER_H
#define FAST_LIMIT_ORDER_ORDER_H


#include "Limit.h"

class Order {
private:
    int id;
    bool isBuyOrder;
    int quantity;
    float price;
    int entryTime;
    int eventTime;
    Order *nextOrder;
    Order *prevOrder;
    Limit *parentLimit;

public:
    Order(int id, bool isBuyOrder, int quantity, float price, int entryTime);
};


#endif //FAST_LIMIT_ORDER_ORDER_H
