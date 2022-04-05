#include "rubrica.h"

rubrica::rubrica() : _voci(nullptr), _size(0), _capacity(0) {}

rubrica::~rubrica() {
	delete[] _voci;
	_voci = nullptr;
	_size = 0;
	_capacity = 0;
}

rubrica::rubrica(const rubrica& other) : _voci(nullptr), _size(0), _capacity(0) {
	_voci = new voce[other._capacity];
	for (int i=0; i<other._size; i++) {
		_voci[i] = other._voci[i];
	}
	_size = other._size;
	_capacity = other._capacity;
}

rubrica& rubrica::operator=(const rubrica& other) {
	rubrica tmp(other);
	swap(tmp);
	return *this;
}

rubrica::rubrica(rubrica::size_type capacity) : _voci(nullptr), _capacity(0), _size(0) {
	_voci = new voce[capacity];
	_capacity = capacity;
}

void rubrica::swap(rubrica& other) {
	std::swap(_voci, other._voci);
	std::swap(_capacity, other._capacity);
	std::swap(_size, other._size);
}