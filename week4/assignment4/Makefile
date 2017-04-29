LIBS="-lm"

all: clean build run

clean: 
	rm arithmetic

build: arithmetic.c
	gcc -o arithmetic arithmetic.c $(LIBS)

run:
	./arithmetic

