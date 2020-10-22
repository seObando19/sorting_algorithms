#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: double linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *act, *previ;

	if (!list || !(*list))
		return;
	/**
	 * First loop to transverse double linked list
	 **/
	for (act = (*list)->next; act; act = act->next)
	{
		/**
		 * Second loop to compare the integer
		 **/
		while (act->prev && act->prev->n > act->n)
		{
			/**
			* If the condition is True, then the nodes switch places
			**/
			previ = act->prev;
			act->prev = previ->prev;
			previ->prev = act;
			previ->next = act->next;
			act->next = previ;

			/**
			* Condition to check in case of current node reach the first position
			**/
			if (act->prev)
				act->prev->next = act;
			else
				*list = act;

			if (previ->next)
				previ->next->prev = previ;
			print_list(*list);
		}
	}
}
