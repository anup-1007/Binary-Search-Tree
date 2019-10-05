#include <stdio.h>
#include <stdlib.h>
#define DATA_TYPE int32_t
#include "queue.h"
#include<assert.h>

int main()
{
   Queue queue = queue_new(10);
   Queue *q = &queue;

   Queue_Result res;

   q = queue_add(q,1,&res);
   
   assert(q->count==1);
   assert(q->data[q->head-1] == 1);
    q = queue_add(q,2,&res);


    q = queue_add(q,3,&res);
    assert(q->data[q->head-1]==3);
    assert(q->data[q->tail]==1);

    q = queue_delete(q,&res);
    assert(res.data==1);

   printf("I Am he");
    assert(q->data[q->tail]==2);
    return 0;
}