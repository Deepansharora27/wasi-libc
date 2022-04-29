#ifndef __wasilibc___header_sys_socket_h
#define __wasilibc___header_sys_socket_h

#include <__struct_msghdr.h>
#include <__struct_sockaddr.h>
#include <__struct_sockaddr_storage.h>

#include <wasi/api.h>

#define SHUT_RD __WASI_SDFLAGS_RD
#define SHUT_WR __WASI_SDFLAGS_WR
#define SHUT_RDWR (SHUT_RD | SHUT_WR)

#define MSG_PEEK __WASI_RIFLAGS_RECV_PEEK
#define MSG_WAITALL __WASI_RIFLAGS_RECV_WAITALL
#define MSG_TRUNC __WASI_RIFLAGS_RECV_DATA_TRUNCATED

#define SOCK_DGRAM __WASI_FILETYPE_SOCKET_DGRAM
#define SOCK_STREAM __WASI_FILETYPE_SOCKET_STREAM

#define SOCK_NONBLOCK (0x00004000)
#define SOCK_CLOEXEC (0x00002000)

#define SOL_SOCKET 0x7fffffff

#define SO_TYPE 3

#define AF_UNSPEC 0
#define AF_INET 1
#define AF_INET6 2
#define AF_UNIX 3

#ifdef __cplusplus
extern "C" {
#endif

int accept(int socket, struct sockaddr *restrict addr, socklen_t *restrict addrlen);
int accept4(int socket, struct sockaddr *restrict addr, socklen_t *restrict addrlen, int flags);

#ifdef __cplusplus
}
#endif

#endif
