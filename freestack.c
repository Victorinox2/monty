#include "monty.h"
/**
 * file: freestack.c
 * auth: victorinox2
* free_stack - frees a doubly linked list
* @head: the head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
