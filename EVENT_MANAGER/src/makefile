IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./

_DEPS = modules.h mod_event.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.o module.o event_manager.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
BINS=../bin
$(BINS)/file: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

