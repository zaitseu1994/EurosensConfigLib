#ifndef LIBTYPE4_GLOBAL_H
#define LIBTYPE4_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBTYPE4_LIBRARY)
#  define LIBTYPE4_EXPORT Q_DECL_EXPORT
#else
#  define LIBTYPE4_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBTYPE4_GLOBAL_H
