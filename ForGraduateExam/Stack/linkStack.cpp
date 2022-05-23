#include "stdio.h"

typedef struct linkstack {
  int data;
  linkstack *next;
} linStack;

bool isEmpty(linStack lt) { return true; }


// void Initstack(linStack &lt) { lt.top = -1; }

int main() {
  linStack S;
  // Initstack(S);
  S.data = 0;
  printf("hello start it！\n");
  // printf("Top: %d\n", S.top);

  printf("isEmpty: %d", isEmpty(S));

  return 0;
}