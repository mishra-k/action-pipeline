#ifndef __LOADER_LOAD_RESPONSE__ 
#define __LOADER_LOAD_RESPONSE__

#include "loader_constants.h"

#include "resource_loader.h"
#include "../base/base_types.h"
#include <string>

using base::Byte;
using namespace std;

namespace loader {
    class LoadResponse{
         virtual void onData(Byte* data, size_t size, LOAD_STATUS status) = 0;
         virtual void onMetaData(string data) = 0;
    };
}
#endif //__LOADER_LOAD_RESPONSE__