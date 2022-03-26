#ifndef __LOADER_FILE_LOADER__ 
#define __LOADER_FILE_LOADER__
#include <memory>
#include "load_response.h"
#include "loader.h"

using namespace std;

namespace loader
{
    class FileLoader : public Loader{

        public:
            FileLoader(){}

            //Async load request,
            // will notify client with data
            void load(string identitfier, weak_ptr<LoadResponse> client){};
    };

} // namespace loader
#endif// __LOADER_FILE_LOADER__ 