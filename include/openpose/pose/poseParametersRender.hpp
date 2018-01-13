#ifndef OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP
#define OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP

#include <openpose/core/common.hpp>
#include <openpose/pose/enumClasses.hpp>

namespace op
{
    // Rendering parameters
    const auto POSE_DEFAULT_ALPHA_KEYPOINT = 0.6f;
    const auto POSE_DEFAULT_ALPHA_HEAT_MAP = 0.7f;

    // Model-Dependent Parameters
    // CUDA-code Model-Dependent Parameters must be defined with #define
    // COCO
    #define POSE_COCO_PAIRS_RENDER_GPU \
        1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   1,8,   8,9,   9,10,  1,11,  11,12, 12,13,  1,0,   0,14, 14,16,  0,15, 15,17
    #define POSE_COCO_SCALES_RENDER_GPU 1
    #define POSE_COCO_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f
    // MPI
    // MPI colors chosen such that they are closed to COCO colors
    #define POSE_MPI_PAIRS_RENDER_GPU \
        0,1,   1,2,   2,3,   3,4,   1,5,   5,6,   6,7,   1,14,  14,8,  8,9,  9,10,  14,11, 11,12, 12,13
    #define POSE_MPI_SCALES_RENDER_GPU 1
    #define POSE_MPI_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
         43.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f
    // BODY_18
    #define POSE_BODY_18_PAIRS_RENDER_GPU   POSE_COCO_PAIRS_RENDER_GPU
    #define POSE_BODY_18_SCALES_RENDER_GPU  POSE_COCO_SCALES_RENDER_GPU
    #define POSE_BODY_18_COLORS_RENDER_GPU  POSE_COCO_COLORS_RENDER_GPU
    // BODY_19
    #define POSE_BODY_19_PAIRS_RENDER_GPU \
        1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18
    #define POSE_BODY_19_SCALES_RENDER_GPU 1
    #define POSE_BODY_19_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f
    // BODY_23
    #define POSE_BODY_23_PAIRS_RENDER_GPU \
        0,1,  0,4,  1,2,  2,3,  4,5,  5,6,  0,7,  7,8,  7,13, 8,9,  9,10,10,11,11,12,13,14,14,15,15,16,16,17, 0,18,18,19,18,21,19,20,21,22
    #define POSE_BODY_23_SCALES_RENDER_GPU 1
    #define POSE_BODY_23_COLORS_RENDER_GPU \
        255.f,     0.f,     0.f, \
        255.f,    55.f,     0.f, \
        255.f,   110.f,     0.f, \
        255.f,   165.f,     0.f, \
        255.f,   215.f,     0.f, \
        255.f,   235.f,     0.f, \
        255.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
        175.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
         25.f,    25.f,   128.f, \
          0.f,    85.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,  212.5f,   255.f, \
          0.f,   255.f,   255.f, \
        255.f,     0.f,     0.f, \
        255.f,     0.f,   255.f, \
        238.f,   130.f,   238.f, \
        138.f,    43.f,   226.f, \
         75.f,     0.f,   130.f
    // BODY_59
    // Body + left hand + right hand
    #define POSE_BODY_59_PAIRS_RENDER_GPU \
        1,8,   1,2,   1,5,   2,3,   3,4,   5,6,   6,7,   8,9,   9,10,  10,11, 8,12,  12,13, 13,14,  1,0,   0,15, 15,17,  0,16, 16,18, \
        7,19, 19,20, 20,21, 21,22, 7,23, 23,24, 24,25, 25,26, 7,27, 27,28, 28,29, 29,30, 7,31, 31,32, 32,33, 33,34, 7,35, 35,36, 36,37, 37,38, \
        4,39, 39,40, 40,41, 41,42, 4,43, 43,44, 44,45, 45,46, 4,47, 47,48, 48,49, 49,50, 4,51, 51,52, 52,53, 53,54, 4,55, 55,56, 56,57, 57,58
    #define POSE_BODY_59_SCALES_RENDER_GPU \
        1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f,1.f, 1.f,1.f,1.f,1.f, \
        0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f, \
        0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f, 0.5f,0.5f,0.5f,0.5f,0.5f
    #define POSE_BODY_59_COLORS_RENDER_GPU \
        255.f,     0.f,    85.f, \
        255.f,     0.f,     0.f, \
        255.f,    85.f,     0.f, \
        255.f,   170.f,     0.f, \
        255.f,   255.f,     0.f, \
        170.f,   255.f,     0.f, \
         85.f,   255.f,     0.f, \
          0.f,   255.f,     0.f, \
        255.f,     0.f,     0.f, \
          0.f,   255.f,    85.f, \
          0.f,   255.f,   170.f, \
          0.f,   255.f,   255.f, \
          0.f,   170.f,   255.f, \
          0.f,    85.f,   255.f, \
          0.f,     0.f,   255.f, \
        255.f,     0.f,   170.f, \
        170.f,     0.f,   255.f, \
        255.f,     0.f,   255.f, \
         85.f,     0.f,   255.f, \
        \
        255.f,    0.f,    0.f, \
        191.f,   47.f,   47.f, \
        127.f,   63.f,   63.f, \
         63.f,   47.f,   47.f, \
        255.f,   76.f,    0.f, \
        191.f,   57.f,    0.f, \
        127.f,   38.f,    0.f, \
         63.f,   19.f,    0.f, \
        255.f,  152.f,    0.f, \
        191.f,  114.f,    0.f, \
        127.f,   76.f,    0.f, \
         63.f,   38.f,    0.f, \
        255.f,  255.f,    0.f, \
        191.f,  191.f,    0.f, \
        127.f,  127.f,    0.f, \
         63.f,   63.f,    0.f, \
          0.f,  255.f,    0.f, \
          0.f,  191.f,    0.f, \
          0.f,  127.f,    0.f, \
          0.f,   63.f,    0.f, \
        \
        255.f,    0.f,  153.f, \
        191.f,    0.f,  114.f, \
        127.f,    0.f,   76.f, \
         63.f,    0.f,   38.f, \
        203.f,    0.f,  255.f, \
        152.f,    0.f,  191.f, \
        101.f,    0.f,  127.f, \
         50.f,    0.f,   63.f, \
         50.f,    0.f,  255.f, \
         37.f,    0.f,  191.f, \
         25.f,    0.f,  127.f, \
         12.f,    0.f,   63.f, \
          0.f,  102.f,  255.f, \
          0.f,   76.f,  191.f, \
          0.f,   51.f,  127.f, \
          0.f,   25.f,   63.f, \
          0.f,  255.f,  255.f, \
          0.f,  191.f,  191.f, \
          0.f,  127.f,  127.f, \
          0.f,   63.f,   63.f

    // Hand color selection
    // http://www.perbang.dk/rgbgradient/
    // 1. Main color
    //     - Each finger of the right hand: 11 steps from FF0000 to FF0001 and pick last 5 from HSV gradient.
    //     - Each finger of the left hand: 21 steps from FF0000 to FF0001, choosing 4 among first 6 (HSV grad.),
    //       and then green.
    //     Note: Choosing first 5 from 11 steps was giving 2 very close greens
    // 2. Gradient color from wrist to finger tips
    //     - Inside each finger: 5 steps from main color to 000000, and selecting first 4 from RGB gradient.
    //     Note: Used HSV gradient for red finger.

    // Rendering functions
    OP_API const std::vector<float>& getPoseScales(const PoseModel poseModel);
    OP_API const std::vector<float>& getPoseColors(const PoseModel poseModel);
    OP_API const std::vector<unsigned int>& getPoseBodyPartPairsRender(const PoseModel poseModel);
}

#endif // OPENPOSE_POSE_POSE_PARAMETERS_RENDER_HPP
