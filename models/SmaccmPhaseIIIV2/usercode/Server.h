/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.3
 */
#ifndef __SERVER_H__
#define __SERVER_H__
#ifdef __cplusplus
extern "C" {
#endif
#include <CAN_Server_intermon.h>
#include <Camera_VM_Server_intermon.h>
#include <Server_CAN_intermon.h>
#include <Server_UART_out_intermon.h>
#include <UART_in_Server_intermon.h>
#include "input_CAN_Server_get_pt_data_monitor.h"
#include "input_Camera_VM_Server_get_camera_data_monitor.h"
#include "input_UART_in_Server_get_pt_data_monitor.h"
#include "ivory.h"
void component_entry(void);
void component_init(void);

#ifdef __cplusplus
}
#endif
#endif /* __SERVER_H__ */