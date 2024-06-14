#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "QueueLL.h"

void initQueue(Queue *Q){
	Q->front = NULL;
	Q->rear = NULL;
}

void enqueue(Queue*Q, int data){
	NodePtr temp = malloc(sizeof(Queue));
	if(temp!= NULL){
		temp->data = data;
		temp->next = NULL;
		if(Q->rear == NULL){
			Q->front = temp;
		} else{
			Q->rear->next = temp;
		}
		Q->rear = temp;
		}	
	}

void dequeue(Queue *Q){
	NodePtr temp;
	if(Q->front != NULL){
		temp = Q->front;
		Q->front = temp->next;
		if(Q->front == NULL){
			Q->rear = NULL;
		}
		free(temp);
	}
}

int front(Queue Q){
	return(Q.rear != NULL) ? Q.front->data : -1;
}

void rear(Queue Q){
	
}

bool isEmpty(Queue Q){
	return Q.rear == NULL ? true : false;
}



