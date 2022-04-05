#ifndef RUBRICA_H
#define RUBRICA_H

#include "voce.h"

class rubrica {

public:

	typedef unsigned int size_type; ///< tipo usato per dimensioni della rubrica

private:

	size_type _size;		///< Dimensione corrente della rubrica
	size_type _capacity;	///< Capacità massima della rubrica
	voce* _voci;			///< Puntatore all'array di voci

public:

	/** 
	*	Costruttore di default.	
	*	Costruttore che crea una rubrica vuota.
	*/
	rubrica();

	/**
	* Distruttore.
	*/
	~rubrica();


	/**
	* Copy Constructor.
	*
	* @param other rubrica da copiare in this
	*/
	rubrica(const rubrica& other);

	/**
	* Overload dell'operatore di assegnamento.
	*
	* @param other rubrica da assegnare a this
	*/

	rubrica& operator=(const rubrica& other);

	explicit rubrica(size_type capacity);

	void swap(rubrica& other);
};

#endif