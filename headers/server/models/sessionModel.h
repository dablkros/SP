#include "./userModel.h"
#include <time.h>
#include <sys/types.h>

#ifndef SESSIONMODEL_H
#define SESSIONMODEL_H

typedef struct {
    int session_id;
    int user_id;
    time_t expiration_time;
} Session;
#endif //SESSIONMODEL_H
