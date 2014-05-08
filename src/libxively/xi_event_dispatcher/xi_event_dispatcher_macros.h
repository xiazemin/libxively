// Copyright (c) 2003-2014, LogMeIn, Inc. All rights reserved.
// This is part of Xively C library, it is under the BSD 3-Clause license.

#ifndef __XI_EVENT_DISPATCHER_MACROS_H__
#define __XI_EVENT_DISPATCHER_MACROS_H__

#include <stdint.h>

#define XI_EVTD_EVENTS_BEGIN() typedef enum evts{ \
    XI_EVTD_NO_EVENT = 1 << 0, XI_EVTD_NO_EVENT_ID = 0, XI_EVTD_COUNT = 1
#define XI_EVTD_EVENTS_END() }xi_event_type_t;

#define XI_EVTD_EVENTS_1( e1 ) \
    + 1 , e1##_ID = 1, e1 = 1 << 1
#define XI_EVTD_EVENTS_2( e1, e2 ) \
    + 1 XI_EVTD_EVENTS_1( e1 ), e2##_id = 2, e2 = 1 << 2
#define XI_EVTD_EVENTS_3( e1, e2, e3 ) \
    + 1 XI_EVTD_EVENTS_2( e1, e2 ), e3##_ID = 3, e3 = 1 << 3
#define XI_EVTD_EVENTS_4( e1, e2, e3, e4 ) \
    + 1 XI_EVTD_EVENTS_3( e1, e2, e3 ), e4##_ID = 4, e4 = 1 << 4
#define XI_EVTD_EVENTS_5( e1, e2, e3, e4, e5 ) \
    + 1 XI_EVTD_EVENTS_4( e1, e2, e3, e4 ), e5##_ID = 5, e5 = 1 << 5

#define XI_EVTD_HANDLE_PTRS() \
typedef RET (handle_0)(void); typedef handle_0* handle_0_ptr; \
typedef RET (handle_1)(xi_evtd_handle_1_t); typedef handle_1* handle_1_ptr; \
typedef RET (handle_2)(xi_evtd_handle_1_t, xi_evtd_handle_2_t); typedef handle_2* handle_2_ptr; \
typedef RET (handle_3)(xi_evtd_handle_1_t, xi_evtd_handle_2_t, xi_evtd_handle_3_t); typedef handle_3* handle_3_ptr; \
typedef RET (handle_4)(xi_evtd_handle_1_t, xi_evtd_handle_2_t, xi_evtd_handle_3_t, xi_evtd_handle_4_t); typedef handle_4* handle_4_ptr;

typedef enum
{
    XI_EVTD_HANDLE_0_ID = 0,
    XI_EVTD_HANDLE_1_ID,
    XI_EVTD_HANDLE_2_ID,
    XI_EVTD_HANDLE_3_ID,
    XI_EVTD_HANDLE_4_ID
} xi_evtd_handle_id_t;

#endif // __XI_EVENT_DISPATCHER_MACROS_H__