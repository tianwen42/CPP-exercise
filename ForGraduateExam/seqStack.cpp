// 用顺序表实现栈结构

#include <stdio.h>
#define MAXSIZE 10

typedef struct {
  int data[MAXSIZE];
  int top;
} seqStack;

void Initstack(seqStack &st) { st.top = -1; }

// int Stack_GetTop(seqStack &st) {
//   if (st.top+1>MAXSIZE) {

//   }
// }

bool isEmpty(seqStack st) {
  if (st.top == -1) {
    return true;
  } else {
    return false;
  }
}
// int Stack_Pop(Stack *stack, &top) {}

int main() {
  seqStack S;
  Initstack(S);
  S.data[0] = 0;
  printf("hello\n");
  printf("Top: %d\n", S.top);
  printf("isEmpty: %d", isEmpty(S));

  return 0;
}