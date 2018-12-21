#ifndef __ESPWEBCFG_H
#define __ESPWEBCFG_H

#include <inttypes.h>

//#define NOSERIAL // Раскомментируйте это макроопределение, чтобы не использовать отладочный вывод в Serial (можно будет использовать пин TX после загрузки скетча для полезной нагрузки)
//#define UDP_enable
const uint8_t ledPin = 13;
#endif
#define USELDR
#define LDR_pin 14