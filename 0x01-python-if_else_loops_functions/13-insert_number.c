#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts a node
 * @head: head
 * @number: int to add
 * Return: new node
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *temp = NULL, *node = NULL;

    if (head == NULL)
        return (NULL);

    node = malloc(sizeof(listint_t *));
    if (node == NULL)
        return (NULL);
    node->next = NULL;
    node->n = number;

    temp = *head;
    while (temp)
    {
        if (temp->n >= number)
        {
            node->next = temp;
            *head = node;
            return (node);
        }
        else if (temp->n <= number && temp->next->n >= number)
        {
            if (temp->next != NULL)
            {
                node->next = temp->next;
                temp->next = node;
                return (node);
            }
        }
        temp = temp->next;
    }

    return (NULL);
}
