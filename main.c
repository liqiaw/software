#include "task.h"


void main(void)
{
	task_init();
	
	while(1)
	{
		task_thread();
	}	
}
