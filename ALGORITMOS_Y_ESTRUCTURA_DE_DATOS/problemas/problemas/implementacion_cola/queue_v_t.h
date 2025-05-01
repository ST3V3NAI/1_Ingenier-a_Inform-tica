// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// COMENTARIOS: clase TAD cola implementada con un vector circular

#pragma once

#include <iostream>
#include <cassert>

#include "round_vector_t.h"

const unsigned char MAX_STACK_SIZE = 20;

using namespace std;

template <class T>
class queue_v_t
{
public:
  // constructor, constructor por defecto y destructor
	queue_v_t(const int);
	queue_v_t(void);
	~queue_v_t(void);

	bool empty(void) const;
	bool full(void) const;
	int size(void) const;
	
	void push(const T& dato);
	void pop(void);
	const T& front(void) const;
	const T& back(void) const;
	void intercambio(void); 
	queue_v_t inverse(void);
	void deletingEvenPos(void);
	void divide(queue_v_t<T>& mayores, queue_v_t<T> menores, T valor);
	void biggest(void);

	void write(ostream& os = cout) const;
	
private:
	round_vector_t<T> v_;
	int         		  front_;
	int       				back_;
};

template<class T>
queue_v_t<T>::queue_v_t(const int max_sz):
v_(max_sz),
front_(0),
back_(-1)
{}

template<class T>
queue_v_t<T>::queue_v_t(void):
v_(MAX_STACK_SIZE),
front_(0),
back_(-1)
{}

template<class T>
queue_v_t<T>::~queue_v_t(void)
{}

template<class T>
bool
queue_v_t<T>::empty(void) const
{
	return (back_ < front_);
}

template<class T>
bool
queue_v_t<T>::full(void) const
{
	return (size() >= v_.get_size() - 1);
}

template<class T>
int
queue_v_t<T>::size(void) const
{
 	return back_ - front_ + 1;
}

template<class T>
void
queue_v_t<T>::push(const T& dato)
{
	assert(!full());
	back_++;
	v_.at(back_) = dato;
}

template<class T>
void
queue_v_t<T>::pop(void)
{
	assert(!empty());			
	front_++;
}

template<class T>
const T&
queue_v_t<T>::front(void) const
{
	assert(!empty());
	return v_.at(front_);
}

template<class T>
const T&
queue_v_t<T>::back(void) const
{
	assert(!empty());
	return v_.at(back_);
}

template<class T>
void queue_v_t<T>::intercambio(void) {
	assert(size() >= 2); // Nos aseguramos de que haya al menos dos elementos

	// Calculamos la posición del segundo elemento
	int segundo = (front_ + 1) & v_.get_size();

	T temp = v_[front_];
	v_[front_] = v_[segundo];
	v_[segundo] = temp;
}

template<class T>
queue_v_t<T> queue_v_t<T>::inverse(void) {
	queue_v_t<T> inverse;
	assert(!full());

	back_ = (back_ + 1) % v_.get_size(); 
	inverse push.v_[back_];
	pop();
}

template<class T>
void queue_v_t<T>::deletingEvenPos(void) {
	queue_v_t<T> aux;
	while(!empty()) {
		aux push(back());
		pop();
	}

	while(!aux_empty()) {
		aux.pop();
		if(aux.empty()) {
			push(aux.front());
			aux.pop();
		}
	}
}

template<class T>
void queue_v_t<T>::divide(queue_v_t<T>& mayores, queue_v_t<T> menores, T valor) {
	while(!empty()) {
		if(front() >= valor) {
			mayores.push(front());
			pop();
		} else {
			menores.push(front());
			pop();
		}
	}
}

template<class T>
void queue_v_t<T>::biggest(void) {
	while(!empty()) {
		T	aux = front();
		pop();
		if(front() < aux) {
			pop();
			push(aux);
		}
	}
}




template<class T>
void
queue_v_t<T>::write(ostream& os) const
{
	for(int i = back_; i >= front_; i--)
		os << v_.at(i) << " ";  
	os << endl;
}

template<class T>
ostream&
operator<<(ostream& os, const queue_v_t<T>& q)
{
	q.write(os);
	return os;
}

