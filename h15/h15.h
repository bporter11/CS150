/**
    @file h15.h
    @author brian porter
    @data CS150 TTEVE
*/
#ifndef H15_H_
#define H15_H_
#if __cplusplus <= 199711L

#include <sstream>
#include <string>
#include <iostream>
template <typename T>

std::string to_string(const T& value)
{
    std::ostringstream out;
    out << std::fixed << (0 + value);
    return out.str();

}
#endif
#endif
