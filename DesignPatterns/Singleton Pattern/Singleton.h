#pragma once

/*
* This generic singleton class
*/

template <typename T>
class Singleton
{
private:
	static T* m_instance;		// instance of generic type

	// private constructors/destructor
	/*
	* this is to ensure that we can create a single instance
	* of the class by only getInstance()
	*/
	Singleton();							// default constructor
	Singleton(const Singleton<T>& source);	// copy constructor
	virtual ~Singleton();					// virtual destructor

	// assignment operators
	Singleton<T>& operator=(const Singleton<T>& source);	// copy assignment

public:
	static T* getInstance();	// accessor to single instance
};

// declare because of static type
template <typename T>
T* Singleton<T>::m_instance;
