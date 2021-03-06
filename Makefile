CC   := gcc
AR   := ar
FIND := find . -type f -name

EXE := tfx
SRC :=  $(wildcard libs/EasyPIO/*.c) \
	$(wildcard libs/tf/*.c) \
      	$(wildcard *.c)
OBJ := $(SRC:.c=.o)

CFLAGS  := -c -g -Wall -Werror -Ilibs/EasyPIO -Ilibs/tf
ARFLAGS := -rcs
LDFLAGS := -g -L. -nostartfiles 
LDLIBS  := -ltfx -lwiringPi -lm

.PHONY: clean

all: $(EXE)

tfx: $(OBJ) libtfx.a
	$(CC) -o $@ $< $(LDFLAGS) $(LDLIBS)

libtfx.a: $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

clean:
	$(FIND) '*.o' -delete
	$(FIND) '*.a' -delete
