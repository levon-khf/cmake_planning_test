#ifndef PROCESS_H
#define PROCESS_H
#include "Map.h"
class Process
{
public:
    Process(Map map);
    void print();
    
private:
    Map map;
};

#endif