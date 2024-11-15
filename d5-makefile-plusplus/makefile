OBJS = main.o aa.o bb.o
CC = gcc
CFLAG += -c -g -Wall

mmake: $(OBJS)
	$(CC) $^ -g  -o $@ 

main.o:main.c
	gcc main.c $(CFLAG) -o $@

aa.o:aa.c
	gcc $^ -c -o$@ 

bb.o:bb.c
	gcc $^ -c -o $@

clean:
	rm *.o mmake -rf
