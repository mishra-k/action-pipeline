#ifndef __MEMORY_MEMORY_MAP__
#define __MEMORY_MEMORY_MAP__

#include <stddef.h>
#include <string>
#include "../base/base_types.h"

#define MAX_BUFFER_SIZE 2048

//Memory manager of program.
// as of now it simply allocates and deallocates which can be extended
// for own memory pool.

using namespace std;
namespace memory{
    base::Byte *getBuffer(size_t size, string client){
        if(size>MAX_BUFFER_SIZE) return nullptr;

        return new base::Byte[size];
    }

    void releaseBuffer(base::Byte *buffer){
        delete []buffer;
    }
}


#endif //__MEMORY_MEMORY_MAP__