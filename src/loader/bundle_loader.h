#ifndef __LOADER_BUNDLE_LOADER__ 
#define __LOADER_BUNDLE_LOADER__
#include <memory>
#include "load_response.h"
#include "loader.h"

using namespace std;

namespace loader
{
    class BundleLoader : public Loader{

        public:
            BundleLoader(){}

            //Async load request,
            // will notify client with data
            void load(string identitfier, weak_ptr<LoadResponse> client){};
    };

} // namespace loader
#endif// __LOADER_BUNDLE_LOADER__ 