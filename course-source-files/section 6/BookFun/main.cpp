#include <iostream>
#include "Book.h"
using namespace std;

void printBookDetails(const Book& book);

int main()
{
	Book gameOfThrones("George Martin", "Game of Thrones",
		"Fantasy", 864);

	Book mathBook("James Stewart", "Calculus", "Math", 1392);

	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language",
		"Programming", 1376);

	/*printBookDetails(gameOfThrones);
	printBookDetails(mathBook);
	printBookDetails(cppBook);*/

	gameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppBook.printBookDetails();

	return 0;
}

void printBookDetails(const Book& book)
{
	cout << book.getTitle() << " by " << book.getAuthor()
		<< " has " << book.getNumPages() << " pages, "
		<< "and its genre is " << book.getGenre() << endl;
}