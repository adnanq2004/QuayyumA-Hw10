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

int main() {

  char arr[] = "there are this many dogs in here: ";
  char * thing = &arr;
  struct linkednode * test1 = make_list(thing, 100);
  print_list(test1);
  char arr2[] = "and there are this many cats here: ";
  char * thing2 = &arr2;
  struct linkednode * test2 = make_list(thing2, 50);
  test1->next = test2;
  print_list(test1);
  char arr3[] = "and there are this many cows here: ";
  char * thing3 = &arr3;
  struct linkednode * test3 = insert_front(test1, thing3, 49);
  print_list(test3);
  struct linkednode  * test4 = free_list(test3);
  print_list(test3);

  return 0;

}
