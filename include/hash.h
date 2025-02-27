#pragma once
#ifndef HASH_H
#define HASH_H
#include "bytes.h"
class Hash {
    /*
    abstract hash class
    if you wanna add a new hash function it has to implement this class in order to work with the other classes
    */
   public:
    Hash() = default;                                     // it needs a default constructor
    virtual int getHashSize() const noexcept = 0;         // a getter for the byte len of the hash
    virtual Bytes hash(const Bytes bytes) const = 0;      // a hash function that takes a Bytes object
    virtual Bytes hash(const std::string str) const = 0;  // a second hash function that takes a string
    virtual ~Hash(){};
};

#endif  // HASH_H