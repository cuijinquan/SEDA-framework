#ifndef _UTILS_H
#define _UTILS_H
#include <list>

class utiltool {
public:
   static std::list<char *> split_string(char *src, char *tail, char token);
};

#endif //
