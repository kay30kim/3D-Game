CC = g++
CFLAGS = -O3 -Wall -Wextra -ansi -pedantic
LIBS = -L/opt/homebrew/lib -lSDL2
INCLUDES = -I/opt/homebrew/include -I./

#SOURCES = raycaster_textured.cpp raycaster_flat.cpp
SOURCEX = $(wildcard *.cpp)

OBJECTS = $(SOURCES:.cpp=.o)

TARGET = 3dgame

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(INCLUDES) $(SOURCES) -o $(TARGET) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)