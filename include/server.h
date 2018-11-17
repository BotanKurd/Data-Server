//
// Created by Botan on 26/10/18.
//

#ifndef DATI_SERVER_H
#define DATI_SERVER_H


#include <string.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include "shell.h"
#include "utils.h"

typedef struct session {
    unsigned char connected;
    int socket;
    int id;
} session;

int port, max_connection;

char *data_path;

char *username, *password;

void *connection_handler(void *socket_desc);

void load_configuration();

void bind_server();

#endif //DATI_SERVER_H


