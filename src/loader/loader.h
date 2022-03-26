#ifndef __LOADER_LOADER__ 
#define __LOADER_LOADER__
#include <memory>
#include "load_response.h"

using namespace std;

namespace loader
{
    class Loader{

        public:
            Loader(){}

            //Async load request,
            // will notify client with data
            virtual void load(string identitfier, weak_ptr<LoadResponse> client) = 0;


        private:
        
        weak_ptr<LoadResponse>client_;

    };

} // namespace loader
#endif// __LOADER_LOADER__ 