#ifndef __NET_H__
#define __NET_H__

#include <stdint.h>
#include <stdlib.h>
#include "rc.h"


// Network related functions
#ifdef _WIN32
void        net_init_WSA(void);
#endif
void        net_close(int sd);
int         net_connect(const char *host, const char *port);
int         net_send(int sd, const uint8_t *buffer, size_t size);
int         net_send_packet(int sd, rc_packet *packet);
rc_packet*  net_recv_packet(int sd);
int         net_clean_incoming(int sd, int size);

#endif // NET_H