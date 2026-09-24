CXX = g++
CXXFLAGS = -std=c++20 -Wall
SRC = $(wildcard src/*.cpp)
TARGET = git_lab

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) -Iinclude

clean:
	rm -f $(TARGET) src/*.o

.PHONY: all clean
