#ifndef __TRANSFORM_TRANSFORMER__ 
#define __TRANSFORM_TRANSFORMER__

#include <memory>
#include <unordered_map>

#include "transform_constants.h"
#include "../loader/resource_loader.h"
#include "../base/base_types.h"
#include "transform_response.h"
#include "transformer_base.h"
#include "image_decoder.h"
#include "json_transformer.h"
#include "decompressor.h"

using namespace base;
using namespace std;

namespace transform
{
    class Transformer{

    unordered_map<INPUT_FORMAT, TRANFORM_TYPE>input_type_mapping = {
        {IMAGE, STREAM},
        {RAW, BLOCK},
        {JSON, BLOCK}
    };
        public:
            Transformer(){}
            void onInputData(Byte* data, size_t size);
            TRANFORM_TYPE init(string metadata, weak_ptr<TransformResponse> client);

        private:
           INPUT_FORMAT getInputFormat(string metadata){
               return INPUT_FORMAT::RAW;
           }

        unique_ptr<TransformerBase>transformer_;
        INPUT_FORMAT input_format_;    

    };

} // namespace engine
#endif// __TRANSFORM_TRANSFORMER__ 