#include <stdio.h>
#include <stdlib.h>

struct linkednode {
  char * str;
  int n;
  struct linkednode * next;
};

struct linkednode * make_list(char * ptr, int num) {
  struct linkednode * exm = malloc(sizeof(struct linkednode));
  // strcpy(exm->str, *ptr);
  exm-> str = ptr;
  exm->n = num;
  return exm;
}

void print_list(struct linkednode * start) {
  printf("%s %d\n", start->str, start->n);
  if (start->next == NULL) {
    printf("\n");
  }
  else {
    print_list(start->next);
  }
}

struct linkednode * insert_front(struct linkednode * exm, char * s, int m) {
  struct linkednode * ret = make_list(s, m);
  ret->next = exm;
  return ret;
}

struct linkednode * free_list(struct linkednode * exm) {
  struct linkednode * ret = exm;
  if (exm == NULL) {
  }
  else {
    free(exm);
    free_list(exm->next);
  }
  return ret;
}

struct linkednode * remove_node(struct linkednode *front, int num) {
  struct linkednode * temp1 = front;
  struct linkednode * temp2;
  
  while (temp1->next) {
    temp2 = temp1->next;
    if (temp2->n == num) {
      temp1->next = temp2-> next;
      free(temp2);
    }
    temp1 = temp2->next;
  }
}
