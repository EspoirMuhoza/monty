#include "monty.h"
/**
 * f_pall - function to  prints the stack
 * @head: head
 * @counter: no used counter
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h != NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = (*h).next;
	}
}
