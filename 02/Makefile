
ALL_BIN = switch1
CFLAGS = -c -Wall

all : $(ALL_BIN)

switch1 : switch1.o

promotion : promotion.o

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf *.o $(ALL_BIN)
