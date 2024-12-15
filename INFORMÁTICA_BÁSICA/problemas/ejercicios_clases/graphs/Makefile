# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado de Ingeniería Informática
# Informática Básica
#
# @author Steven Abolaji Ibidkun
# @date Dec 6, 2024
# @brief A Makefile written for the compilation of the file
# graph.cc
#

CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
LDFLAGS =

all: graph

graph: graph_class.o graph_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f graph_class.o
	rm -f C6_graph
	rm -f graph_main.o