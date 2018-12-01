//
//
#ifndef queue_hpp
#define queue_hpp

#include "queue.hpp"


class Queues {
    private:
    
    int expressCars;
    int cashCars;
    int attendedCars;
    int totalWaitingTime;

    struct car {
        int arrivalTime;
        int transactionTime;
        int exitTime;
        bool hasExpress;
        car *link;
    }*head, *tail;
    
    public:

    Queues();
    void enQueue(int , int);
    int getWaitingTime();
    void deQueue();
    void incrementattendCars();
    void decrementTime();
    bool finish();
    void setExitTime(int);
    bool isEmpty();
    void printResults();
};
#endif


