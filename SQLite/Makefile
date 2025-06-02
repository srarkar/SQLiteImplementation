CC=gcc
CFLAGS=-Iinclude -Wall -Wextra
SRC=src/db.c
OBJ=$(SRC:.c=.o)
EXEC=my_program

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)