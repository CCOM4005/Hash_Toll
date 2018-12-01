//
//
#ifndef distribution_hpp
#define distribution_hpp

#include "distribution.hpp"

class Distribution {
    private:
    int overallPercent;
    struct node {
        int percent;
        int qty;
        node *link;
    }*head;
    
    public:
    	Distribution();
    	bool isEmpty();
    	bool isComplete();
    	void insert(int, int);
    	int randNumber();
    	void fillDistribution();
    	void print();
};
#endif
