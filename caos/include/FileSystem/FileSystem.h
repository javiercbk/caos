#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <string>

namespace os{
/**
* Clase que define la interfaz generica a un FileSystem cualquiera.
*/
class FileSystem
{
    public:

        /**
        * Constructor de FileSystem
        * WARNING
        * utilizo un entero de 64 bits para el tamaño en bytes
        *
        * @param size El tamaño en BYTES que debe direccionar el file system.
        * @param blockSize El tamaño en BYTES de bloque a utilizar.
        * @param pointerSize El tamaño en BITS del puntero a utilizar.
        */
        FileSystem(unsigned long long size, unsigned int blockSize, unsigned short pointerSize);
        virtual ~FileSystem() = 0;
        unsigned long long getSize();
        virtual unsigned long long getMaxSize() = 0;
        virtual unsigned long long getRealMaxSize() = 0;
        unsigned int getBlockSize();
        unsigned short getPointerSize();
    protected:
        std::string type;
        unsigned long long size;
        unsigned int blockSize;
        unsigned short pointerSize;
};

}
#endif // FILESYSTEM_H
