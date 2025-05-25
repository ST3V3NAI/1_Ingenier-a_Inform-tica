// EJERCICIO 1 -RECURSIVIDAD MOCHILA (0 - 1)

void generate(vector_t<int> &x, int i, int n, int weight, int value) {
  if (i == n) {
    if (weight < MaxWeight && value > best_value) {
      best_value =  value;
      best_x = x;
    }
  }
  x[i] = 0;
  generate(x, i + 1, n, weight, value);
  x[i] = 1;
  generate(x, i + 1, n, weight + weights[i], value + prize[i]);
}



// EJERCICIO 2 - RECURSIVIDAD SUMA SUBMATRIZ

int sum_row(matriz_t<int> &A, int i, int j, int n) {
  if (j > n) return 0;
  return A.at(i,j) + sum_row(A, i, j + 1, n);
}

int sum_submatriz(matriz_t<int> &A, int i, int j, int n) {
  if (i > n) return 0;
  return sum_row(A, i, j, n) + sum_submatriz(A, i + 1, j, n);
}



// EJERCICIO 3 - ITERACIÓN SUMA SUBMATRIZ

int sum_submatriz(matriz_t<int> &A, int n) {
  int suma{0};
  for (int i{1}; i <= n; i++) {
    for (int j{1}; j <= n; j++) {
      suma += at(i,j);
    }
  }
  return suma;
}



// EJERCICIO 4 - CONECTA LISTA INVERSAMENTE

template<class T> void dll_t<T>::conecta_inversamente(const dll_t<T> &L) {
  while (!L.empty()) {
    push_back(L.pop_back());
  }
}



// EJERCICIO 5 - ÁNGULO COSENO

double sim_cos(const vector_t<double> &B) {
  double numerador{0}, sqA{0}, sqB{0};
  for (int i{0}; i < get_size(); i++) {
    numerador += (at(i) * B.at(i));
    sqA += (at(i) * at(i));
    sqB += (B.at(i) * B.at(i));
  }
  double modA{sqrt(sqA)}, modB{sqrt(sqB)};
  double denominador = modA * modB;
  return numerador / denominador;
}



// EJERCICIO 6 - MULTIPLICACIÓN LISTAS
int dll_t<int>::multiplicacion(const dll_t<T> &B) {
  int k{0}, sumA{0}, mult{0};
  dll_node_t<T> *aux{get_tail()};
  while (aux != NULL) {
    sumA += aux->get_data() * pow(10,k);
    aux = aux->get_next();
    k++;
  }
  aux = B.get_tail();
  while (aux != NULL) {
    mult += sumA * aux->get_data() * pow(10,k);
    aux = aux->get_next();
    k++;
  }
  return mult;
}