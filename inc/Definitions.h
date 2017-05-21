/*
* Definitions.h
*
*  Created on: 20/05/2017
*  Author: Luis Rocha
*/

#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

#include <atomic>

#define COMMAND_NOT_EXECUTED        ((int)(-1))

struct StopProgram
{
    std::atomic<bool> condition;
    StopProgram()
    {
        condition = false;
    };

    void set(bool value)
    {
        condition = value;
    };

    bool get()
    {
        return condition;
    };
};

typedef struct StopProgram StopProgram;

#endif /* _DEFINITIONS_H_ */
