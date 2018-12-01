//
//
#include "distribution.hpp"
#include <iostream>

class Distribution {
    private:
    int overallPercent;
    struct node {
        int percent;
        int qty;
        node *link;
    }*head;
    
    public:
    Distribution(){
        this->overallPercent = 100;
        this->head = NULL;
    }
    
    bool isEmpty(){                                 //return true if distribution is empty
        return this->head == NULL;
    }
    
    bool isComplete() {                             //return true if distribution is complete
        return this->overallPercent <= 0;
    }
    
    void insert(int percent, int qty) {             //insert data in distribution
        node *tmp = new node;
        tmp->percent = overallPercent;
        tmp->qty = qty;
        tmp->link = NULL;
        
        if(isEmpty())
            head = tmp;
        else {
            tmp->link = head;
            head = tmp;
        }
        this->overallPercent -= percent;
    }
    
    int randNumber() {                              //creates a random number based on the distribution
        if (!isEmpty()) {
            srand(time(NULL));
            int random = rand() % 100 + 1;
            
            node *current = head;
            while (current != NULL) {
                if (random <= current->percent) {
                    return current->qty;
                }
                else
                current = current->link;
            }
        }
        return 0;
    }
    void fillDistribution() {                       //fill the complete distribution
        while(!isComplete())
        {
            int percent = 0;
            int qty = 0;
            cout << "Entra el porciento: "; cin >> percent;
            cout << "Entra la cantidad: "; cin >> qty;
            insert(percent,qty);
        }

    }
    void print() {
        if(!isEmpty()) {
            node *current = head;
            while(current != NULL) {
                cout << "Porciento: " << current->percent << " Cantidad: " << current->qty << endl;
                current = current->link;
            }
        }
    }
};
