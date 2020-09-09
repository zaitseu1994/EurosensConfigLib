#ifndef LIBTYPE4_H
#define LIBTYPE4_H

#include "libType4_global.h"

extern "C" {
LIBTYPE4_EXPORT int getInt();
}

class LIBTYPE4_EXPORT LibType4
{
public:
    LibType4();
    int get();
};

#endif // LIBTYPE4_H
