#ifndef __LOADER_RESOURCE_LOADER__ 
#define __LOADER_RESOURCE_LOADER__
#include <memory>

#include "load_response.h"
using namespace std;

namespace loader
{
    class ResourceLoader{

        public:
            ResourceLoader(){}

            //Async load request,
            // will notify client with data
            void load(string identitfier, weak_ptr<LoadResponse> client);

    };

} // namespace loader
#endif// __LOADER_RESOURCE_LOADER__ 