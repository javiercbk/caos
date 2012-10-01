/*
 * PageDescriptor.h
 *
 *  Created on: Sep 20, 2012
 *      Author: javier
 */

#pragma once

namespace os{

/**
 * Esta clase provee la descripcion de la direcci—n de la p‡gina indicando
 * cuantos bits usa para direccionar un directorio, cuantos bits usa para
 * direccionar una p‡gina y cuantos bits utiliza para direccionar el offset.
 */
class PageDescriptor {
public:
	PageDescriptor(int bitsDirectory, int bitsPage, int bitsOffset);
	virtual ~PageDescriptor();
	int getBitsDirectory();
	int getBitsPage();
	int getBitsOffset();
private:
	int bitsDirectory;
	int bitsPage;
	int bitsOffset;
};

}
