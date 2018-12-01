//
//
#include "queue.hpp"
#include <iostream>

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

    Queues() {
        head = tail = NULL;
        totalWaitingTime = attendedCars = expressCars = cashCars = 0;
    }
    
    void enQueue(int arrivalTime, int transactionTime){                //adds a new car to the queue
        car *tmp = new car;
        tmp->arrivalTime = arrivalTime;
        tmp->transactionTime = transactionTime;
        tmp->exitTime = 0;
        srand(time(NULL));
        tmp->hasExpress = rand() % 2;
        tmp->link = NULL;
        
        (tmp->hasExpress == 1 ? this->expressCars++ : this->cashCars++);
        
        if(isEmpty() && !tmp->hasExpress)
        head = tail = tmp;
        else if(!tmp->hasExpress) {
            tail->link = tmp;
            tail = tmp;
        }
    }
    
    int getWaitingTime(){                                           //return total waiting time
        return totalWaitingTime;
    }
    
    void deQueue() {                                                //add waiting time of a car to total and remove car (node) from queue
        if (!isEmpty()) {
            totalWaitingTime += head->exitTime - head->arrivalTime;
            car *tmp = head;
            head = head->link;
            delete tmp;
        }
    }
    
    void incrementattendCars(){
        this->attendedCars++;
    }
    
    void decrementTime() {                                          //Decrement front car time by one second
        if (!isEmpty()) {
            head->transactionTime = head->transactionTime - 1;
        }
    }
    
    bool finish() {                                                 //return true if car finish transaction
        return  head->transactionTime <= 0;
    }
    
    car front() {                                                   //return the first car of the queue
        return *head;
    }
    
    void setExitTime(int exitTime) {                                //set exit time of front car
        if (!isEmpty()) {
            head->exitTime = exitTime;
        }
    }
    
    bool isEmpty() {                                                //return true if queue is empty
        return head == NULL;
    }
    
    void printResults () {
        cout << "Total de carros con autoExpresso: " << this->expressCars << endl;
        cout << "Total de carros sin autoExpresso: " << this->cashCars << endl;
        cout << "Total de carros atendidos: " << this->attendedCars << endl;
        cout << "Promedio del tiempo de espera: " << this->totalWaitingTime / this->attendedCars << " segundos" << endl;
    }
    
};
