#include "transformer.h"

namespace transform{
    void Transformer::onInputData(base::Byte* data, size_t size) {
        transformer_->onData(data, size);
    }

    TRANFORM_TYPE Transformer::init(string metadata, weak_ptr<TransformResponse> client){
        input_format_ = getInputFormat(metadata);

        switch (input_format_)
        {
        case IMAGE:
            transformer_ = make_unique<ImageDecoder>(client);
            break;
        case RAW:
            transformer_ = make_unique< Decompressor>(client);
            break;
        case JSON:
            transformer_ = make_unique< JsonTransformer>(client);
            break;
        

        }
        //TODO: error handling
        return input_type_mapping[input_format_];
    }
}
