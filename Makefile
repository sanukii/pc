HEADERS = putVarsInBuf.h description_var_struct.h readVariants.h readQuestions.h
SOURCES	= main.c readVariants.c readQuestions.c

all: pc_compilation

pc_compilation: $(HEADERS) $(SOURCES)
	gcc $(SOURCES) $(HEADERS) -o pc_compilation
