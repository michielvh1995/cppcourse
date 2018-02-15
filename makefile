SRC=game.cpp surface.cpp template.cpp
OBJ=game.o surface.o template.o

WARNING=-Wall -Wno-strict-aliasing -Wno-write-strings -Wno-unused-function
CFLAGS+=$(WARNING) -m64 -Ofast -flto -march=native -funroll-loops -fno-builtin
RM=rm
LDFLAGS=-lSDL2 -lGLEW -lGLU -lGL -lfreeimage -lm -lstdc++


all: game

game: $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

clean:
	-$(RM) $(OBJ) game




.PHONY: all
.PHONY: clean
