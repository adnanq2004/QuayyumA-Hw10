struct linkednode;

struct linkednode * make_list(char * ptr, int num);

void print_list(struct linkednode * start);

struct linkednode * insert_front(struct linkednode * exm, char * s, int m);

struct linkednode * free_list(struct linkednode * exm);

struct linkednode * remove_node(struct linkednode *front, int num);
