/*
  Name: Darsh Chirag Padaria
  email id: dcpadaria@myseneca.ca
  student id: 145537205
  Date: 2021/12/08
  section: ZBB
*/


#ifndef SDDS_STREAMABLE_H
#define SDDS_STREAMABLE_H

namespace sdds {
	class Streamable {
	public:
		virtual std::ostream& write(std::ostream& os)const = 0; // pure
		virtual std::istream& read(std::istream& is) = 0; // pure
		virtual bool conIO(std::ios& io)const = 0; // pure
		virtual operator bool()const = 0; // pure
		virtual ~Streamable() {};

	};

	std::ostream& operator<<(std::ostream& os, const Streamable& obj);
	std::istream& operator>>(std::istream& is, Streamable& obj);
}

#endif