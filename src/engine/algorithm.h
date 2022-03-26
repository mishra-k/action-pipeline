#ifndef __ENGINE_ALGORITHM__ 
#define __ENGINE_ALGORITHM__

#include <memory>

#include "../base/base_types.h"
#include "../loader/loader_constants.h"
#include "../transform/transform_constants.h"
#include "../loader/resource_loader.h"
#include "../loader/load_response.h"
#include "../transform/transformer.h"
#include "../transform/transform_response.h"

using namespace std;
using namespace base;
using loader::LOAD_STATUS;
using loader::LoadResponse;
using transform::TRANSFORM_STATUS;
using transform::TransformResponse;

namespace engine
{
    class Algorithm:public LoadResponse, public TransformResponse{

        public:
            Algorithm();
            void start(string url);
            void consumeResponse(Response& response);

            //LoadResponse implementation
            void onData(Byte* data, size_t size, LOAD_STATUS status);
            void onMetaData(string data);  

            //TransformResponse implementation
            void onTransformed(Response& response, TRANSFORM_STATUS status);

        private:

        enum STATE {
            NONE,
            PENDING,
            DONE
        };

        void shutdown();
        void setState(STATE state){  state_ = state;}



        unique_ptr<loader::ResourceLoader>loader_;
        unique_ptr<transform::Transformer>transformer_;
        transform::TRANFORM_TYPE type_;
        STATE state_;

        weak_ptr<Algorithm> this_;

    };

} // namespace engine
#endif// __ENGINE_ALGORITHM__ 