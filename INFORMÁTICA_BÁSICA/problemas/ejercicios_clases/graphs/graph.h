/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date Dec 4, 2023
 * @brief El programa 
 * @bug There are no known bugs
 */

#include <iostream>
#include <vector>
#include <array>
#include <cstdlib> //Para exit
#include <string>
#include <fstream>
#include <algorithm> //Para std:::find

#ifndef GRAPH_H
#define GRAPH_H

class Graph {
 public:
  Graph() = default;
  Graph(const int vertices, const int numero_de_aristas) : numero_de_vertices_{vertices}, numero_de_aristas_{numero_de_aristas} {}
  const int vertices() const { return numero_de_vertices_; }
  const std::vector<std::array<int, 2>>& aristas() const { return aristas_; }
  friend std::istream& operator>>(std::istream& in, Graph& grafo);
  friend std::ostream& operator<<(std::ostream& out, const Graph& grafo);
 private:
  int numero_de_vertices_{};
  int numero_de_aristas_{};
  std::vector<std::array<int, 2>> aristas_{};
};

void Write(const std::string& file_name, const Graph& user_graph);
#endif