CC = gcc
DEPS = CString.h
CFLAGS = -Wall
OBJ = CString.o main.o

%: %.o %.c $(DEPS) 
	$(CC) $(CFLAGS) -c -o $@ $<

go: $(OBJ)
	gcc $(CFLAGS) -o $@ $^

.PHONY: all clean

all: $(FILES)

clean:
	@rm -f *.o $(FILES)
