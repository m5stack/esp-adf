#pragma once
#include "freertos/FreeRTOS.h"
#define BTN_A   39
#define BTN_B   38
#define BTN_C   37
#define BTN  ((1ULL<<BTN_A) | (1ULL<<BTN_B) | (1ULL<<BTN_C))

void btn_tast_create(void);
extern uint8_t  play_pause;
extern uint8_t key_vaule;