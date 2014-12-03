#include "student.h"
#include <iostream>

std::istream& operator>>(std::istream& f, Student& x)
{
	//A fájl beolvasásakor neptunkód jegy párokat olvasunk be (egy neptun kód többször is szerepel)
	f>>x.neptun>>x.summark;
	//std::cout<<x.neptun<<" "<<x.summark<<std::endl;
	return f;
}