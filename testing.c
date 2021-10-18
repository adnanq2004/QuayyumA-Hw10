#include <stdio.h>
#include <stdlib.h>

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
