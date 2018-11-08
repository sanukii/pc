HEADERS = putVarsInBuf.h description_structures.h readVariants.h
SOURCES	= main.c readVariants.c

all: pc_compilation

pc_compilation: $(HEADERS) $(SOURCES)
	gcc $(SOURCES) $(HEADERS) -o pc_compilation
