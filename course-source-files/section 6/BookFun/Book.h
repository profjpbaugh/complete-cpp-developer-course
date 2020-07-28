#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
	public:
		Book(string author, string title,
			string genre, int numPages);
		string getAuthor() const;
		string getTitle() const;
		string getGenre() const;
		int getNumPages() const;
		void printBookDetails() const;

	private:
		string author;
		string title;
		string genre;
		int numPages;
};

#endif