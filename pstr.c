#include "monty.h"
/**
 * file: pstr.c
 * auth: victorinox2
 * f_pstr - prints the string starting from the top of the stack,
 * followed by a new
 * @head: the stack head
 * @counter: the line_number
 * Return: return nothing.
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
