//
//  Hash.hpp
//  Hash
//
//  Created by Jonathan  Nieves on 11/29/18.
//  Copyright © 2018 Jonathan  Nieves. All rights reserved.
//

#ifndef Hash_hpp
#define Hash_hpp


#include <string>
using std::string;

class Hash {
public:
    string key;
    int value;
    Hash(string, int);
    string getKey();
    int getValue();
};
#endif /* Hash_hpp */
