# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

# Program name
PROGRAM_NAME := shapes

# Source files
SOURCES := shapes_main.cc shape.cc

# Header dependencies
HEADERS := shapes.h shape.h

# Object files (generated from source files)
OBJECTS := $(SOURCES:.cc=.o)

# Default target
all: $(PROGRAM_NAME)

# Linking rule
$(PROGRAM_NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation rule for object files
%.o: %.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -rf $(PROGRAM_NAME) $(OBJECTS)

# PHONY targets to prevent conflicts with files named "clean" or "run"
.PHONY: clean run

# Run the program
run: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)
