#ifndef QueueLL
#define QueueLL

typedef struct node{
	int data;
	struct node *next;
}Node, *NodePtr;

typedef struct{
	NodePtr front;
	NodePtr rear;
}Queue;


#endif



































































































































































