/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2023-2024
 * 
 * @author Steven Abolaji Ibidokun
 * @date Dec 4, 2024
 * @brief El programa almacena información sobre un grafo y la guarda en otro fichero o 
 *        la imprime por pantalla. Previamente, se asegura de que los datos son correctos.
 * @bug There are no known bugs
 */

#include "graph.h"
/**
 * @brief Escribe el grafo en un fichero
 * 
 * @param[in] file_name. Nombre del fichero en el que se va a guardar el grafo
 * @return Un fichero con el grafo
*/
void Write(const std::string& file_name, const Graph& user_graph) {
  std::ofstream output_file{file_name};
  if (!output_file) {
    std::cerr << "No se ha podido crear el archivo "  << file_name << std::endl;
    return;
  }
  output_file << user_graph;
  output_file.close();
}

/**
 * @brief Define cómo se debe mostrar en pantalla el objeto Graph
 * 
 * @param[in] out. Flujo de salida
 * @param[in] graph. Grafo que se va a mostrar
 * 
 * @return Muestra en pantalla, o en un fichero, los vértices y aristas de un grafo
*/
std::ostream& operator<<(std::ostream& out, const Graph& grafo) {
  out << grafo.numero_de_vertices_ << " " << grafo.numero_de_aristas_ << std::endl;
  for (const auto& arista : grafo.aristas()) {
    for (int number : arista) {
      out << number << " ";
    }
    out << std::endl;
  }
  return out;
}

/**
 * @brief Define cómo se debe leer el objeto Graph. Además, corrobora que los datos introducidos
 *        son coherentes y emite un mensaje de error si se han introducido datos erróneos. Podemos encontrar 3 errores:
 *          -Número de datos insuficiente
 *          -Número de vertices incongruente con lo introducido en un principio
 *          -Aristas repetidas
 * 
 * @param[in] in Flujo de entrada
 * @param[in] graph. Grafo cuya información se va a almacenar
 * 
 * @return Guarda la información de un grafo y emite un mensaje de error en caso de haber datos erróneos
*/
std::istream& operator>>(std::istream& in, Graph& grafo) {
  in >> grafo.numero_de_vertices_;
  in >> grafo.numero_de_aristas_;
  grafo.aristas_.resize(grafo.numero_de_aristas_);
  int origen{0};
  int destino{0};
  std::vector<std::array<int, 2>> aristas_diferentes;
  
  for (int counter{0}; counter < grafo.numero_de_aristas_; ++counter) {
    in >> origen;
    if (in.fail()) {
      std::cerr << "Número de datos insuficiente.\n";
      exit(EXIT_FAILURE);
    }
    in >> destino;
    if (in.fail()) {
      std::cerr << "Número de datos insuficiente.\n";
      exit(EXIT_FAILURE);
    }
    if (origen > (grafo.numero_de_vertices_ - 1) || destino > (grafo.numero_de_vertices_ - 1)) {
      std::cerr << "Ha introducido vértices erróneos.\n";
      exit(EXIT_FAILURE); 
    }
    std::array<int, 2> nueva_arista{origen, destino};
    if (std::find(aristas_diferentes.begin(), aristas_diferentes.end(), nueva_arista) != aristas_diferentes.end()) {
      std::cerr << "Ha repetido alguna arista.\n";
      exit(EXIT_FAILURE);
    }
    aristas_diferentes.emplace_back(nueva_arista);
    grafo.aristas_[counter] = {origen, destino};
  }
  return in;
}