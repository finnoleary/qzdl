#ifndef _ZNAMELISTABLE_H_
#define _ZNAMELISTABLE_H_

#include "ZListable.h"

class ZNameListable : public ZListable{
public:
	ZNameListable( QListWidget *parent, int type, const char* file, const char* name);
	ZNameListable( QListWidget *parent, int type, QString &qfile, QString &name);
	const char* getFile();
	const char* getName();

	private:
		QString fileName;
		QString displayName;
};

#endif