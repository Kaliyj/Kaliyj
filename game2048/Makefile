CC=gcc
BIN=game2048.bin
OBJ=direction.o game2048.o main.o tools.o
FLAG=-Wall -Werror -DDEBUG
STD=-std=gnu99

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ) 

%.o:%.c
	$(CC) $(STD) $(FLAG) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJ)
