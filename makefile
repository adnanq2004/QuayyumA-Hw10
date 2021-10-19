all: linkedlist.c testing.c linkedlist.h
	gcc testing.c linkedlist.c

# linkedlist.o: linkedlist.c testing.c linkedlist.h
# 	gcc -c testing.c linkedlist.c

run:
		./a.out
