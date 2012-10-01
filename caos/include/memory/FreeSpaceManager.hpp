/*
 * FreeSpaceManager.h
 *
 *  Created on: Sep 23, 2012
 *      Author: javier
 */

#pragma once

namespace os {
/**
 * Interfaz generica del Manager de espacio libre en memoria
 */
template<class T>
class FreeSpaceManager {
public:
	virtual T* getNextFreeSpace() = 0;
};

}
