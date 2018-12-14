/*

DU12SEM.CPP

JY

Mlaskal's semantic interface for DU1-2

*/

// CHANGE THIS LINE TO #include "du3456sem.hpp" WHEN THIS FILE IS COPIED TO du3456sem.cpp
#include "du3456sem.hpp"
#include "duerr.hpp"

#ifndef _CSTDLIB
#define _CSTDLIB
#include <cstdlib>
#endif


#ifndef _ALGORITHM
#define _ALGORITHM
#include <algorithm>
#endif

namespace mlc {

    // Returns integer and bool signalizing whether it needed to be truncated.
    std::tuple<int, bool>
    try_parse_uint(char *str, std::size_t len) {
        char *str_end;
        unsigned long ul = std::strtoul(str, &str_end, 10);
        int truncated_val = (int) ul;

        // Return parsed int and signal whether the str needed truncation.
        if (ul != truncated_val) {
            return std::make_tuple(truncated_val, true);
        }
        else {
            return std::make_tuple(truncated_val, false);
        }
    }

    double
    try_parse_real(char *str, std::size_t len) {
        char *str_end;
        double d = std::strtod(str, &str_end);
        if (str_end == str) {
            return HUGE_VAL;
        }
        return d;
    }

    void
    convert_to_upper(std::string &str) {
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
    }
};

/*****************************************/