#include "student.h"
#include <iostream>

std::istream& operator>>(std::istream& f, Student& x)
{
	f>>x.neptun>>x.summark;
	return f;
}