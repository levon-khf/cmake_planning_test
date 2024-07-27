#include "process.h"
#include <iostream>


int main(int args, char** argv)
{
    Process p{Map()};
    p.print();
    return 0;
}