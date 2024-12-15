/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Steven Abolaji Ibidokun
 * @date 4 Oct 2024
 * @brief vector Example
 *
 * Use std::vector when number of items is unknown before-wise
 * Consider it to be default container to store collections of items of any sanme type
 * Vector is implemented as a dynamic table
 * Access stored items just like in std::array
 * Remove all elements: vec.clear()
 * Add a new item in one of two ways:
 * 	vec.eplace_back(value) [preferred, c++11]
 * 	vec.push_back(value)	[historically better known]
 *
 * @see http://www.cplusplus.com/reference/vector/vector/
 */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> numbers; //Declare a vector but we don't initialize it
			     
	numbers.push_back(5);
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(8);
	numbers.push_back(9);
	numbers.push_back(99);

	cout << "Size: " << numbers.size() << endl;
	cout << "Last number: " << numbers.back() << endl;
	return 0;

}

