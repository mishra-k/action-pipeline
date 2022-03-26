#ifndef __TRANSFORM_DECOMPRESSOR__
#define __TRANSFORM_DECOMPRESSOR__

#include <memory>

#include "transformer_base.h"
#include "transform_response.h"
#include "../base/base_types.h"

namespace transform{
class Decompressor:public TransformerBase{

    public:
    Decompressor(weak_ptr<TransformResponse> client):TransformerBase(client){}
    void onData(Byte* data, size_t size){};

};
}

#endif //__TRANSFORM_DECOMPRESSOR__