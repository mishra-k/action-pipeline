#ifndef __LOADER_LOADER_CONSTANTS__
#define __LOADER_LOADER_CONSTANTS__

namespace loader{
    enum LOAD_STATUS{
        PROGRESS,
        DONE,
        FAILED
    };

    enum LOAD_SCHEME{
        FILE,
        BUNDLE,
        HTTP,
        HTTPS,
        NO_SCHEME
    };
}

#endif