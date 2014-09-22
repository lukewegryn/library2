/*
* Luke Wegryn
* 9057-39534
* lwegryn@vt.edu
* ECE 3574
* Homework 2
*/
#ifndef LIBRARY_UI_H_
#define LIBRARY_UI_H_
#include "library.h"
#include <QList>   
#include <QString>
#include <QStringList>

class LibraryUI : public Library {
	public:
		enum Choices{READ=1, ADD, FIND, REMOVE, SAVE, LIST, QUIT};
		enum Types {BOOK, REFERENCEBOOK, TEXTBOOK, DVD, FILM, DATADVD};
		LibraryUI(Library* lib);
		void add(QStringList objdata);
		void read();
		void enterData();
		QString find();
		void remove();
		void save();
		void list();
		Choices nextTask();
		void prepareToQuit(bool saved);
	private:
		Library* m_Lib;

};

class RefItemUI //: public RefItem
{
	public:
		~RefItemUI();
		static QStringList prompt();

};

class BookUI : public RefItemUI
{
	public:
		static QStringList prompt();
};

class ReferenceBookUI : public BookUI
{
	public:
		static QStringList prompt();
};

class TextBookUI : public BookUI
{
	public:
		static QStringList prompt();
};

class DvdUI : public RefItemUI
{
	public:
		static QStringList prompt();
};

class FilmUI : public DvdUI
{
	public:
		static QStringList prompt();
};

class DataBaseUI : public DvdUI
{
	public:
		static QStringList prompt();
};

#endif