CC = gcc
CFLAGS = -g
TARGET = ass1
OBJS = main.c
.SUFFIXES: .c .o

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
.c.o:
	$(CC) $(CFLAGS) -c $<
clean:
	/bin/rm -f *.o $(TARGET)
