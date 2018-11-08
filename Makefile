HEADERS = putVarsInBuf.h description_structures.h
SOURCES	= main.c

all: pc_compilation

pc_compilation: $(HEADERS) $(SOURCES)
	gcc $(SOURCES) $(HEADERS) -o pc_compilation
