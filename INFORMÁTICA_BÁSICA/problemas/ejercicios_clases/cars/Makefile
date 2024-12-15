# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado de Ingeniería Informática
# Informática Básica
#
# @author Adrián Pérez Poleo
# @date Dec 4, 2023
# @brief A Makefile written for the compilation of the file
# cars.cc
#

CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
LDFLAGS =

all: cars

cars: cars_class.o cars_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f cars_class.o
	rm -f cars
	rm -f cars_main.o