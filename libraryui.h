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
		QStringList promptRefItem();
		QStringList promptBook();
		QStringList promptReferenceBook();
		QStringList promptTextBook();
		QStringList promptDvd();
		QStringList promptFilm();
		QStringList promptDataBase();
		Choices nextTask();
		void prepareToQuit(bool saved);
	private:
		Library* m_Lib;

};

#endif