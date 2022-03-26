cmake_minimum_required(VERSION 3.10)
project(PROJECT)

add_executable(PROJECT 
../tools/test.cpp 
base/base_types.h 
engine/algorithm.h
engine/algorithm.cpp
loader/bundle_loader.h
loader/file_loader.h
loader/http_loader.h
loader/load_response.h
loader/loader.h
loader/resource_loader.cpp
loader/resource_loader.h
memory/memory_map.h
transform/decompressor.h
transform/image_decoder.h
transform/raw_transformer.h
transform/transform_response.h
transform/transformer_base.h
transform/transformer.cpp
transform/transformer.h
)