#ifndef ESTACKEMPTY_H
#define ESTACKEMPTY_H

#include "EStackExeption.h"

class EStackEmpty : public EStackException
{
public:
    EStackEmpty() : EStackException ("Stack is empty") {}

};

#endif // ESTACKEMPTY_H
