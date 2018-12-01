//
//  main.cpp
//  Hash
//
//  Created by Jonathan  Nieves on 11/29/18.
//	JRP 11/30/2018.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#include <iostream>
#include "HashTable.hpp"
#include "distribution.hpp"
#include "queue.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    HashTable hash;
    
    hash.insert("Jonathan", 1234567);
    cout << hash.search("Jonathan");
    return 0;
}

/*int main()
{
    Distribution arrivalRate;
    Distribution transactionRate;
    Queues list;
    int simulationTime = 0;
    
    cout << "Entre el tiempo de simulacion en segundos: "; cin>>simulationTime;
    
    cout << "Entre la distribution de la tasa de llegada de autos (en numeros enteros) completando un 100%: " << endl;
    arrivalRate.fillDistribution();
    
    cout << "Entre la distribucion de tiempo de transaccion (en numeros enteros) completando un 100%: " << endl;
    transactionRate.fillDistribution();

    for (int seconds=0; seconds<simulationTime; seconds++) {
        for (int i=0;i<arrivalRate.randNumber(); i++) {
            list.enQueue(seconds, transactionRate.randNumber());
        }
        if (!list.finish()) {
            list.decrementTime();
        }
        else {
            list.setExitTime(seconds);
            cout << "Terminada la transaccion." << endl;
            cout<<"Proximo carro en la lista"<<endl;
            list.incrementattendCars();
            list.deQueue();
        }
        
        usleep(100000);
    }
    
    list.printResults();
    return 0;
}
*/


