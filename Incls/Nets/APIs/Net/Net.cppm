/* 
** Copyright® 2025 VISU LTDA. All Right Reserved!
**      Author@ Simão A.Mayunga
**
**  Module:[Net.cppm]
**        
*/
export module Net;
#if defined (__unix__) && defined (_POSIX_VERSION)
# include <sys/socket.h>

#elif defined (_WIN32)
# include <windows.h>
# include <winsock2.h>
  ///...
#else

#endif
export namespace Nets
{
  namespace Net
  {
    template <typename > class Sock 
    {};
  }
}
