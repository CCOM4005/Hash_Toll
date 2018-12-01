//
//  HashMap.hpp
//  Hash
//
//  Created by Jonathan  Nieves on 11/29/18.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include <stdio.h>
#include "Hash.hpp"

const int TABLE_SIZE = 128;

class HashTable {
 private:
    Hash **table;
 public:
    HashTable();
    int hashFunc(string);
    void insert(string, int);
    int search(string);
};
#endif /* HashTable_hpp */
