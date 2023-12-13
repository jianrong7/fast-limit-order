//
// Created by Loh Jian Rong on 13/12/23.
//

#ifndef FAST_LIMIT_ORDER_ORDER_H
#define FAST_LIMIT_ORDER_ORDER_H


#include "Limit.h"
#include "Order.h"

class Book {
private:
    Limit *buyTree;
    Limit *sellTree;
    Limit *lowestSell;
    Limit *highestBuy;
public:
    Book();

    void addOrder(float price, int quantity, bool isBuy);

    void cancelOrder(Order *order);

    void executeOrder();

    int getVolumeAtLimit(float price, bool isBuy);

    int getBestBid();
};


#endif //FAST_LIMIT_ORDER_BOOK_H
