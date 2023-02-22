#include "sort.h"
/**
 * swap - swaps B with C where B->next = C and C->prev = B
 * @B: the first
 * @C: the second
 * Return: nothing
 */
void swap(listint_t *B, listint_t *C){
	listint_t *A = NULL, *D =  NULL;

	A = B->prev;	
	D = C->next;
	B->next = D;
	B->prev = C;
	C->next = B;
	C->prev = A;
	if (A)
		A->next = C;
	if (D)
		D->prev = B;
}
/**
 * insertion_sort_list - uses insertion sort so sort in ascending order
 * @list: the doubly linked list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;

	swap(curr, curr->next);
	*list = curr->prev;
}
