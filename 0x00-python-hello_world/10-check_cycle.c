#include "list.h"

/**
 * check_cycle - function that checks if a list has a cycle
 * @list: linked list
 * Return: 1 if there is a cycle and o if not
 */
int check_cycle(list int_t *list)
{
	listint_t *fast, *slow;

	if(list || !list->next)
		return(0);
	fast = list;
	slow = list;

	while(slow != NULL && fast != NULL && fast->next != NULL
			{
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
			{
			return (1);
			}
			}
			return (0);
		
