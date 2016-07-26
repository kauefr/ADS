SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%.out,$(SRCS))

all: $(PROGS)

%.out: %.c
	$(CC) $(CFLAGS)  -o $@ $<

clean:
	rm *.out
