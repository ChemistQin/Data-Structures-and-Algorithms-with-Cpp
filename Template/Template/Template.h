//
//  Template.h
//  Template
//
//  Created by 覃思平 on 2016/12/25.
//  Copyright © 2016年 覃思平. All rights reserved.
//

#ifndef Template_h
#define Template_h

using namespace std;

template <typename T>
int compare(const T &v1 ,const T &v2){
    if (v1 < v2)
        return -1;
    if (v1 > v2)
        return 1;
    return 0;
}

template <unsigned N , unsigned M>
int compare(const char (&p1)[N] , const char (&p2)[M]){
    return strcmp(p1, p2);
}

#endif /* Template_h */
