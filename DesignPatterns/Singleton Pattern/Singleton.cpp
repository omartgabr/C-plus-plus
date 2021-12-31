/*
* Implementation of Singleton Class
*/

#include <iostream>
#include "Singleton.h"

// default constructor
template <typename T>
Singleton<T>::Singleton() {};

// copy constructor
template <typename T>
Singleton<T>::Singleton(const Singleton<T>& source) {};

// destructor
template <typename T>
Singleton<T>::~Singleton() {};

// assignment operator
template <typename T>
Singleton<T>& Singleton<T>::operator=(const Singleton<T>& source)
{
	return *this;
}

// returns a single instance
template <typename T>
static T* Singleton<T>::getInstance()
{
	// create a new instance if none exists
	if (m_instance == NULL)
	{
		m_instance = new T*;
	}
	return m_instance;
}
