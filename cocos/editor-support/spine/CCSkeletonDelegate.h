//
// Created by Mike on 22.11.13.
//



#ifndef __CCSkeletonDelegate_H_
#define __CCSkeletonDelegate_H_

namespace spine {
    class Skeleton;

    class SkeletonDelegate {
    public:
        virtual void applyCustomTransformation(spine::Skeleton *skeleton) = 0;
    };

}

#endif //__CCSkeletonDelegate_H_
