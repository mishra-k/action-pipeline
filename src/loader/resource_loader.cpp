#include "resource_loader.h"

#include "loader_constants.h"
#include "load_response.h"
#include "loader.h"
#include "http_loader.h"
#include "file_loader.h"
#include "bundle_loader.h"

namespace loader{

    LOAD_SCHEME getScheme(string identifier){
        
        return LOAD_SCHEME::NO_SCHEME;
    }
    
    void ResourceLoader::load(string identitfier, weak_ptr<LoadResponse> client){

        LOAD_SCHEME scheme = getScheme(identitfier);

        switch (scheme)
        {
        case HTTP/* constant-expression */:
        case HTTPS:
            (new HTTPLoader())->load(identitfier, client);
            break;
        
        case FILE:
            (new FileLoader())->load(identitfier, client);
            break;

        case BUNDLE:
            (new BundleLoader())->load(identitfier, client);
            break;    
        default:
            break;
        }
    }
}
