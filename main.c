#include <stdio.h>
#include "d_list.h"

int main()
{
    struct DLIST *list, *tmp;

    list = dlist_init(NULL, NULL);
    tmp = dlist_iterator_next();
    if (!tmp)
        printf("Nothing found in next slot\n");
    dlist_iterator_reset(list);
    dlist_destroy(&list);
    return 0;
}
