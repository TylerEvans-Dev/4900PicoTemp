#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H
// This example uses a common include to avoid repetition
#include "FreeRTOSConfig_examples_common.h"

#define configUSE_TRACE_FACILITY                1
#define configGENERATE_RUN_TIME_STATS           1
#define configRUN_TIME_COUNTER_TYPE uint64_t

#define portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()    /* no-op */
#define portGET_RUN_TIME_COUNTER_VALUE()            time_us_64()

#endif
