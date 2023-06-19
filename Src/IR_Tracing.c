#include "IR_Tracing.h"
#include "main.h"
#include "motor.h"

char ctrl_comm = COMM_BRAKE;			//控制指令
char ctrl_comm_last = COMM_BRAKE;	//上一次的指令

void TracingRun(void)
{
	if(READ_TRACING_R == BLACK_AREA && READ_TRACING_L == BLACK_AREA)
		ctrl_comm = COMM_FORWARD;
	else if (READ_TRACING_R == WHITE_AREA && READ_TRACING_L == BLACK_AREA)
		ctrl_comm = COMM_LEFT;
	else if (READ_TRACING_R == BLACK_AREA & READ_TRACING_L == WHITE_AREA)
		ctrl_comm = COMM_RIGHT;
	else ctrl_comm = COMM_BRAKE;
	
	if(ctrl_comm_last != ctrl_comm)
	{
			ctrl_comm_last = ctrl_comm;
		 	switch(ctrl_comm)
				{
					case COMM_FORWARD:    forward(60,10);break;
					case COMM_BACK:  			back(70,10);break;
					case COMM_LEFT:  			turn_left(70,10);break;
					case COMM_RIGHT: 			turn_right(70,10);break;
					case COMM_BRAKE:  		brake(10);break;
					default : 						break;
				}
	}
}
