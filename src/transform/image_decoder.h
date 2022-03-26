#ifndef __TRANSFORM_IMAGE_DECODER__
#define __TRANSFORM_IMAGE_DECODER__

#include <memory>

#include "transformer_base.h"
#include "transform_response.h"
#include "../base/base_types.h"

namespace transform{
class ImageDecoder:public TransformerBase{

    public:
    ImageDecoder(weak_ptr<TransformResponse> client) : TransformerBase(client){

    }
    void onData(Byte* data, size_t size){};

};
}

#endif //__TRANSFORM_IMAGE_DECODER__