#ifndef __RC_H__
#define __RC_H__

#define DATA_BUFFSIZE 4096

// rcon packet structure
typedef struct _rc_packet {
    int size;
    int id;
    int cmd;
    char data[DATA_BUFFSIZE];
    // ignoring string2 for now
} rc_packet;

#endif // RC_H