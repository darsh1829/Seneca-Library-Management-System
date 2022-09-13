/*
  Name: Darsh Chirag Padaria
  email id: dcpadaria@myseneca.ca
  student id: 145537205
  Date: 2021/12/08
  section: ZBB
*/


#include<iostream>
#include"Streamable.h"

using namespace std;

namespace sdds {
	ostream& operator<<(ostream& os, const Streamable& obj) {
		obj.write(os);
		return os;
	}

	istream& operator>>(istream& is, Streamable& obj) {
		obj.read(is);
		return is;
	}
}