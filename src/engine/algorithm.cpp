#include "algorithm.h"
#include "../base/base_types.h"
#include "../transform/transform_response.h"

using namespace base;
namespace engine {
    Algorithm::Algorithm():
                        loader_(make_unique<loader::ResourceLoader>()),
                        transformer_(make_unique<transform::Transformer>()),
                        state_(NONE) { 

                        }

    void Algorithm::onData(Byte* data, size_t size, LOAD_STATUS status){
        if(status>=loader::LOAD_STATUS::DONE){
            setState(STATE::DONE);
        }
        transformer_->onInputData(data, size);
    }

    void Algorithm::onMetaData(string data){
        
        type_ = transformer_->init(data, this_);

    }

    void Algorithm::onTransformed(Response& response, TRANSFORM_STATUS status){
        
        if(status>=TRANSFORM_STATUS::DONE){
            setState(STATE::DONE);
        }

        consumeResponse(response);
        shutdown();
    }

    void Algorithm::consumeResponse(Response& response){
        switch (response.type)
        {
        case IMAGE:
        //display image
            break;
        
        case JSON:
            {
            Json json(response);
            //consume json
        }
        break;

        case RAW:
        //consume raw data
        break;

        }
    }

    void Algorithm::start(string identifier){
        state_ = PENDING;


        // can be converted to timer and can add watch dog to 
        // monitor for the other servie's blockage
        while(state_ != DONE) {

        }

    }

    void Algorithm::shutdown(){
    }
}//namespace