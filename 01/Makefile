
ALL_BIN = qualifer promotion
CFLAGS = -c -Wall

all : $(ALL_BIN)

qualifer : qualifer.o

promotion : promotion.o

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm -rf *.o $(ALL_BIN)
