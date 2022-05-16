#include "stdio.h"

typedef struct {
  int data;
  linStack *next;
} linStack;

int main() {
  seqStack S;
  Initstack(S);
  S.data[0] = 0;
  printf("hello start it！\n");
  printf("Top: %d\n", S.top);
  printf("isEmpty: %d", isEmpty(S));

  return 0;
}