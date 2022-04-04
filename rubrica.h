#ifndef RUBRICA_H
#define RUBRICA_H

class rubrica {

public:

	/** 
	*	Costruttore di default.	
	*	Costruttore che crea una rubrica vuota.
	*/
	rurbica();

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
};

#endif