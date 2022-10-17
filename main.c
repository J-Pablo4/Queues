#include "queue.h"

int main() {
  Queue *q = queue_new();
  int valor;
  for(int i = 0; i < 999; i++)
    queue_append(q, i);
  while(!queue_empty(q))
  {
    valor = queue_remove(q);
    if(valor % 2 != 0)
        printf("%d ", valor);
  }
  return 0;
}