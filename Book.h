/*
  Name: Darsh Chirag Padaria
  email id: dcpadaria@myseneca.ca
  student id: 145537205
  Date: 2021/12/08
  section: ZBB
*/


#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H

#include"Publication.h"

namespace sdds {
	class Book : public Publication {
		char* m_authorname{};
	private:
		void set(const char* authorname);
	public:
		Book();

		// RULE OF THREE
		Book(const Book& bk);
		Book& operator=(const Book& bk);
		~Book();

		char type()const;
		std::ostream& write(std::ostream& os) const;
		std::istream& read(std::istream& istr);
		void set(int member_id);
		operator bool()const;
	};
	std::ostream& operator<<(std::ostream& os, const Book& obj);
	std::istream& operator>>(std::istream& is, Book& obj);
}


#endif