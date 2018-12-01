//
//  Hash.cpp
//  bucket
//
//  Created by Jonathan  Nieves on 11/29/18.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#include "Hash.hpp"
#include <string>
using std::string;

Hash::Hash(string key, int value) {
    this->key = key;
    this->value = value;
}

string Hash::getKey() {
    return this->key;
}

int Hash::getValue() {
    return this->value;
}




