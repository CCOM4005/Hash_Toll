//
//  HashMap.cpp
//  Hash
//
//  Created by Jonathan  Nieves on 11/29/18.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#include "HashTable.hpp"
#include <string>
#include <iostream>
using std::string;

HashTable::HashTable() {
    table = new Hash *[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = NULL;
    }
}

int HashTable::hashFunc(string key) {
    int hash = 0;
    
    for (int index = 0; index < key.length(); index++)
        hash = 39 * hash + key[index];
    
    hash %= TABLE_SIZE;	//hash=hash%TABLE_SIZE
    return hash;
}

void HashTable::insert(string key, int value) {
    int hash = hashFunc(key);
    
    while (table[hash] != NULL && table[hash]->key != key) {
    	
        hash = hashFunc(key + "1");
    }
    if (table[hash] != NULL)
        delete table[hash];
    table[hash] = new Hash(key, value);
}

int HashTable::search(string key) {
    int  hash = hashFunc(key);
    
    while (table[hash] != NULL && table[hash]->key != key) {
        hash = hashFunc(key + "1");
    }
    if (table[hash] == NULL)
        return -1;
    else
        return table[hash]->value;
    }
