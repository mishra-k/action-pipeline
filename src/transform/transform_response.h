#ifndef __TRANSFORM_TRANSFORM_RESPONSE_ 
#define __TRANSFORM_TRANSFORM_RESPONSE_

#include "../base/base_types.h"
#include "transform_constants.h"
#include "transformer.h"

using namespace base;

namespace transform{
    class TransformResponse{
         virtual void onTransformed(Response& response, TRANSFORM_STATUS status) = 0;
    };
}
#endif //__TRANSFORM_TRANSFORM_RESPONSE_