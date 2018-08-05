#include <stdio.h>
#include "d_list.h"

int main()
{
    struct DLIST *list, *tmp;

    dlist_init(NULL, NULL, NULL, NULL);
    list = dlist_create_list(1, "Philip");
    dlist_prepend_node(&list, 2, "Robert");
    dlist_prepend_node(&list, 3, "Dave");
    dlist_prepend_node(&list, 4, "Mark");
    dlist_append_node(&list, 5, "Allen");
    dlist_iterator_init(list);
    while ((tmp = dlist_iterator_next()) != NULL) {
        printf("Hello, %s\n", ((struct DLIST_DATA *)tmp->data)->message);
    }
    if (!tmp)
        printf("Nothing found in next slot\n");
    printf("Last Item Data\n====================\n"
           "Value: %d\nString: %s\n",
           (((struct DLIST_DATA *)dlist_iterator_last()->data)->value),
           (((struct DLIST_DATA *)dlist_iterator_last()->data)->message));
    dlist_destroy(&list);
    return 0;
}
