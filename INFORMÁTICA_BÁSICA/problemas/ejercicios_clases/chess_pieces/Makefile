# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado de Ingeniería Informática
# Informática Básica
#
# @autthor Steven Abolaji Ibidokun
# @date Dec 4, 2024
# @brief A Makefile written for the compilation of the file
# chess_piece.cc
#

CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
LDFLAGS =

all: chess_pieces

chess_pieces: chess_piece.o chess_pieces.o
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f chess_piece.o
	rm -f chess_pieces
	rm -f chess_pieces.o