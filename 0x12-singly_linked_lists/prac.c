#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


int main(void)
{
    list_t *head;
    list_t *second;
    list_t hello = {10, "Name", NULL};
    size_t n;

    second = &hello;
    head = malloc(sizeof(list_t));
    head->len = 5;
    head->str = "Franca";
    head->next = second;

    second = head;


    second = malloc(suze)
}