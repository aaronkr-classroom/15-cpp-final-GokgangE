#pragma once
// Intl.h

#ifndef GUARD_Intl_h
#define GUARD_Intl_h

#include <iostream>

#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : Example(0) { };
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double Example; // Intl homework
	Intl* clone() const { return new Intl(*this); }
};


#endif // !Guard_Intl_h
