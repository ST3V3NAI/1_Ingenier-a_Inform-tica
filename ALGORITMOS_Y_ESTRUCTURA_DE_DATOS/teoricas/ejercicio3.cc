// Método de matrices traspuesta

void matrix::traspuesta() {
  assert(get_m() == get_n()); 

  for(int i = 1; i <= get_n(); i++) {
    for(int j = i + 1; j <= get_m(); j++) {
      swap(at(i, j), at(j, i));
    }
  }
}