#ifndef __TRANSFORM_TRANSFORM_CONSTANTS__
#define __TRANSFORM_TRANSFORM_CONSTANTS__
namespace transform
{
     enum TRANSFORM_STATUS{
        PROGRESS,
        DONE,
        FAILED
    };

    enum TRANFORM_TYPE {
        BLOCK, //needs full input data to transform
        STREAM //can transform in parts
    };

    enum INPUT_FORMAT {
        IMAGE, //Image type
        RAW,  //RAW Compressed data
        JSON, //Special type JSON
    };

} // namespace transform

#endif //__TRANSFORM_TRANSFORM_CONSTANTS__