#ifndef __TRANSFORM_TRANSFORMER_BASE__
#define __TRANSFORM_TRANSFORMER_BASE__

#include <memory>

#include "transform_response.h"
#include "../base/base_types.h"

namespace transform{
class TransformerBase{

    public:
    TransformerBase(weak_ptr<TransformResponse> client):client_(client){}
    virtual void onData(Byte* data, size_t size) = 0;

    private:
    weak_ptr<TransformResponse> client_;
};
}

#endif //__TRANSFORM_TRANSFORMER_BASE__