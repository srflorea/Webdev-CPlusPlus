CC = g++
CFLAGS = -g -Wall -c
OBJ = webdev.o examples.o
SRC = webdev.cpp examples.cpp
TARGET = webdev

build: $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm -r $(OBJ) $(TARGET)