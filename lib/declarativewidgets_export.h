#ifndef DECLARATIVEWIDGETS_EXPORT_H
#define DECLARATIVEWIDGETS_EXPORT_H

#include <qglobal.h>

#if defined BUILDING_DECLARATIVEWIDGETS
# define DECLARATIVEWIDGETS_EXPORT Q_DECL_EXPORT
#else
# define DECLARATIVEWIDGETS_EXPORT Q_DECL_IMPORT
#endif

#endif
