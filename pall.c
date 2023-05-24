#include "monty.h"

/**
 * pall - prints all elements of the stack
 * @head: pointer to the stack head
 * @line_number: line number of the current command
 *
 * Return: void
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
