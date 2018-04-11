# Masukkan semua file cpp Anda
OBJS = main.cpp oop.cpp src/Aquarium.cpp src/Coin.cpp src/Entity.cpp src/Fish.cpp src/Food.cpp src/Guppy.cpp src/Piranha.cpp src/Point.cpp src/Snail.cpp

CC = g++
COMPILER_FLAGS = -std=c++11 -Wall -O2 -w
LINKER_FLAGS = -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf
OBJ_NAME = oopquarium
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
