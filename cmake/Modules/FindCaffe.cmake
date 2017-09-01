# copied from 
# https://raw.githubusercontent.com/opencv/opencv_contrib/master/modules/cnn_3dobj/FindCaffe.cmake

find_path(Caffe_INCLUDE_DIRS NAMES 
    caffe/caffe.hpp 
    caffe/common.hpp 
    caffe/net.hpp 
    caffe/proto/caffe.pb.h 
    caffe/util/io.hpp
    HINTS
    /usr/local/include)

find_library(Caffe_LIBS NAMES caffe
  HINTS
  /usr/local/lib)

if(CAFFE_LIBS AND Caffe_INCLUDE_DIRS)
    set(Caffe_FOUND 1)
endif()
