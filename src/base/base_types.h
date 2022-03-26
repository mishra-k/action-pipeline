#ifndef __BASE_BASE_TYPES__ 
#define __BASE_BASE_TYPES__

namespace base
{
    typedef unsigned char Byte;
    
    enum DataType{
        IMAGE,
        RAW,
        JSON
    };

    struct Response{
        Byte *data;
        size_t size;
        DataType type;
    };

    struct Json{
        Json(Response& response){
            
        }
    };

} // namespace base
#endif// __BASE_BASE_TYPES__ 