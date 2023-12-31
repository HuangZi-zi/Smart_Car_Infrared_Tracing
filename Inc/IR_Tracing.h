#ifndef __IR_TRACING_H_
#define __IR_TRACING_H_

#include "main.h"
//#define Tracing_R_Pin 				GPIO_PIN_7
//#define Tracing_R_GPIO_Port 	GPIOA
//#define Tracing_L_Pin 				GPIO_PIN_0
//#define Tracing_L_GPIO_Port 	GPIOB

#define READ_TRACING_R 	HAL_GPIO_ReadPin(Tracing_R_GPIO_Port,Tracing_R_Pin)
#define READ_TRACING_L	HAL_GPIO_ReadPin(Tracing_L_GPIO_Port,Tracing_L_Pin)

#define BLACK_AREA 			1
#define WHITE_AREA 			0

//指令定义
#define COMM_BRAKE  		'I'//停止
#define COMM_FORWARD    'A'//前进
#define COMM_BACK  			'B'//后退
#define COMM_LEFT  			'C'//左转
#define COMM_RIGHT 			'D'//右转

void TracingRun(void);

#endif

