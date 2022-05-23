// 用顺序表实现栈结构,INIT_TOP=-1

#include <stdio.h>
#define MAXSIZE 10

typedef struct {
  int data[MAXSIZE];
  int top;
} seqStack;

//初始化
void Initstack(seqStack &st) { st.top = -1; }

int getTop(seqStack &st) {
  if (st.top >= 0 && st.top < MAXSIZE) {
    return st.data[st.top];
  } else {
    return 404;
  }
}

bool isEmpty(seqStack st) {
  if (st.top == -1) {
    return true;
  } else {
    return false;
  }
}

void insert(seqStack &st, int value) {
  if (st.top < MAXSIZE) {
    st.top++;
    st.data[st.top] = value;
  }
}

int pop(seqStack &st) {
  if (st.top > -1) {
    int tmp = st.data[st.top];
    st.top--;
    return tmp;
  } else {
    return 404;
  }
}

int getLength(seqStack st) { return st.top + 1; }

// 打印链表
void print(seqStack st) {
  if (st.top == -1) {
    printf("stack is Null");
  } else {
    for (int i = 0; i <= st.top; i++) {
      printf("%d ", st.data[i]);
    }
  }
}

int main() {

  printf("hello start it！\n");
  printf("初始化: ");
  seqStack S;
  Initstack(S);
  printf("Top:%d  ", S.top);
  printf("isEmpty:%d    ", isEmpty(S));
  print(S);

  // INSERT
  printf("\n插入: ");
  insert(S, 9);
  insert(S, 8);
  insert(S, 7);
  insert(S, 6);
  insert(S, 5);
  printf("Top:%d  ", S.top);
  printf("isEmpty:%d    ", isEmpty(S));
  printf("长度%d\t  ", getLength(S));
  print(S);

  // POP
  printf("\n");
  printf("POP:  ");
  printf("Top:%d  ", S.top);
  printf("isEmpty:%d    ", isEmpty(S));
  pop(S);
  printf("长度%d\t  ", getLength(S));
  print(S);

  /// getTop
  printf("\n");
  printf("getTop:");
  printf("Top:%d  ", S.top);
  printf("isEmpty:%d    ", isEmpty(S));
  printf("getTop:%d    ", getTop(S));

  // getLength
  printf("长度%d\t  ", getLength(S));
  print(S);

  //

  return 0;
}