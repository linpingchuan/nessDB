#ifndef __nessDB_SORTS_H
#define __nessDB_SORTS_H

#include "db.h"
#include "compact.h"

void cola_insertion_sort(struct cola_item *item, int len);
int cola_merge_sort(struct compact *cpt, struct cola_item *c, struct cola_item *a_new, int alen, struct cola_item *b_old, int blen);

#endif
