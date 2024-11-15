OBJS = main.o aa.o bb.o
CC = gcc
CFLAGS += -c -g -Wall



mmake: $(OBJS) 
	$(CC) $(OBJS) -ommake

main.o:main.c
	gcc main.c $(CFLAGS) -omain.o

aa.o:aa.c
	gcc aa.c -c -o aa.o

bb.o:bb.c
	gcc bb.c -c -o bb.o

clean:
	rm *.o mmake -rf

