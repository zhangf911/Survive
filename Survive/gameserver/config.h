#ifndef _CONFIG_H
#define _CONFIG_H

#include "kn_string.h"

typedef enum{
	GATESERVER = 1,
	GROUPSERVER = 2,
}remoteServerType;

typedef struct config{
	//��gateserver���ӵļ���
	kn_string_t lgateip;
	uint16_t    lgateport;
	//groupserver������
	kn_string_t groupip;
	uint16_t    groupport;
	/////
	kn_string_t redisip;
	uint16_t    redisport;
}config;

extern config* g_config;

int loadconfig(); 








#endif