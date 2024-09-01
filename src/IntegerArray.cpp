/**
 * ARDUINO DATA STRUCTURES - INTEGER ARRAY
 *
 * This file is part of the Arduino Data Structures project. You can always find the latest
 * version of this class and project at: https://github.com/ionux/Arduino-Data-Structures
 *
 * Copyright (c) 2024 Rich Morgan <rich.l.morgan@gmail.com>
 * 
 * Licensed under the GNU AGPL v3.  See the accompanying LICENSE file for complete info.
 */

#include "IntegerArray.h"

IntegerArray::IntegerArray()
    : data(dataBuffer), used(0) {}

bool IntegerArray::add(int element)
{
    if (this->used < ADS_INTEGER_ARRAY_MAX_SIZE)
    {
        this->data[used++] = element;

        return true;
    }

    return false;
}

int IntegerArray::get(int index)
{
    if (index >= this->used)
    {
        // TODO: Error handling?
        return -1;
    }

    return this->data[index];
}

bool IntegerArray::set(int index, int element)
{
    if (index < this->used)
    {
        this->data[index] = element;

        return true;
    }

    return false;
}

int IntegerArray::size()
{
    return this->used;
}

int IntegerArray::capacity()
{
    return ADS_INTEGER_ARRAY_MAX_SIZE;
}

void IntegerArray::clear()
{
    this->used = 0;
}
