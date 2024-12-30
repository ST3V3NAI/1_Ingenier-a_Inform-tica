

# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra

# Program name
PROGRAM_NAME := one_less_one_more

# Source files
SOURCES := one_less_one_more_main.cc one_less_one_more.cc

# Object files (generated from source files)
OBJECTS := $(SOURCES:.cc=.o)

# Default target
all: $(PROGRAM_NAME)

# Linking rule
$(PROGRAM_NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation rule for object files
%.o: %.cc one_less_one_more.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -rf $(PROGRAM_NAME) $(OBJECTS)

# PHONY target to prevent conflicts with files named "clean"
.PHONY: clean

# Run the program
run: $(PROGRAM_NAME)
	./$(PROGRAM_NAME)

