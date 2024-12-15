#include <vector>
using namespace std; // Not a good practice, but know it
vector<int> CreateVectorOfFullSquares(int size){
	vector <int> result(size); // Vector of size 'size'
	for (int i{0}; i < size; ++i){
	  result[i] = i * i;
	}
	return result;
}

int main () {
  auto squares = CreateVectorOfFullSquares(10);
  return 0;
}	