#include <stdio.h>
#include <stdlib.h>
#include "QueueLL.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	Queue Q;
	
	enqueue(&Q, 9);
	enqueue(&Q, 6);
	enqueue(&Q, 8);
	
	
	return 0;
}
