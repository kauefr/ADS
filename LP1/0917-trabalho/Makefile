CC = gcc
CFLAGS = -Wall

all: trabalho

trabalho: main.o departamento.o funcionario.o consultas.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o; rm trabalho

run: trabalho
	./trabalho
