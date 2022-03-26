#ifndef __TRANSFORM_JSON_TRANSFORMER__
#define __TRANSFORM_JSON_TRANSFORMER__

#include <memory>

#include "transformer_base.h"
#include "transform_response.h"
#include "../base/base_types.h"

namespace transform{
    class JsonTransformer:public TransformerBase{

        public:
        JsonTransformer(weak_ptr<TransformResponse> client):TransformerBase(client){}
        void onData(Byte* data, size_t size) {};

    };
}

#endif //__TRANSFORM_JSON_TRANSFORMER__