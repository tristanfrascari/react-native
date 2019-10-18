#ifndef _PORT_UWP_H_
#define _PORT_UWP_H_

#ifndef NOMINMAX
# define NOMINMAX
#endif
#include <windows.h>
#include <io.h>

#define __attribute__(x)
#define UWP
#define dup _dup

#undef YI_CLOSE_FILE_FUNCTION
#define YI_CLOSE_FILE_FUNCTION _close

inline int getpagesize (void)
{
  SYSTEM_INFO system_info;
  GetSystemInfo (&system_info);
  return system_info.dwPageSize;
}

#endif
