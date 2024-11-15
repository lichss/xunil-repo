OBJS = main.o aa.o bb.o
CC = gcc
CFLAG += -c -g -Wall

mmake:main.o aa.o bb.o
	$(CC) $(OBJS) -g  -o mmake

main.o:main.c
	gcc main.c $(CFLAG) -o main.o

aa.o:aa.c
	gcc aa.c -c -o aa.o

bb.o:bb.c
	gcc bb.c -c -obb.o

clean:
	rm *.o mmake -rf
