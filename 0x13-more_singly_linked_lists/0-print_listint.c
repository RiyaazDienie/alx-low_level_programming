<<<<<<< HEAD
#include "lists.h"

#include <stdio.h>



/**
 *
 *  * print_listint - Prints all the elements of a listint_t list.
 *
 *   * @h: A pointer to the head of the list_t list.
 *
 *    *
 *
 *     * Return: The number of nodes in the list_t list.
 *
 *      */

size_t print_listint(const listint_t *h)

{

		size_t nodes = 0;



			while (h)

					{

								nodes++;

										printf("%d\n", h->n);

												h = h->next;

													}



				return (nodes);

}
=======
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: listint_t pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
>>>>>>> a744ce9894304881df43b5a68b7a38344acdeeca
