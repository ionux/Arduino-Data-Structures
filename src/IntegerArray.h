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

#ifndef ADS_INTEGER_ARRAY_H
#define ADS_INTEGER_ARRAY_H

/// @brief TODO
const int ADS_INTEGER_ARRAY_MAX_SIZE = 10;

/// @brief TODO
class IntegerArray
{
    public:
        /// @brief TODO
        IntegerArray();

        /// @brief TODO
        /// @param element 
        /// @return 
        bool add(int element);

        /// @brief TODO
        /// @param index 
        /// @return 
        int get(int index);

        /// @brief TODO
        /// @param index 
        /// @param element 
        /// @return 
        bool set(int index, int element);

        /// @brief TODO
        /// @return 
        int size();

        /// @brief TODO
        /// @return 
        int capacity();

        /// @brief TODO
        void clear();

    private:
        /// @brief TODO
        int dataBuffer[ADS_INTEGER_ARRAY_MAX_SIZE];

        /// @brief TODO
        int *data;

        /// @brief TODO
        int used;      
};

#endif /* ADS_ARRAY_H */
