TARGET=libNBase58.so
CC=gcc
CFLAGS=-Wall -I. -fPIC -O3
LINK=gcc -o
LDFLAGS=-shared
SRCDIR=src
OBJDIR=obj

SRC=$(wildcard $(SRCDIR)/*.c)
INC=$(wildcard $(SRCDIR)/*.h)
OBJ=$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

.PHONY: all clean
all: $(TARGET)

clean:
	rm -rf $(OBJ)
	rm -rf $(TARGET)

$(TARGET): $(OBJ)
	$(LINK) $@ $(LDFLAGS) $(OBJ)
	

$(OBJ): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

