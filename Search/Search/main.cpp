//
//  main.cpp
//  Search
//
//  Created by 覃思平 on 2016/11/3.
//  Copyright © 2016年 覃思平. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Search.h"

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> vec = {2,4,8,16,32,64,128,256,512,1024};
    for(auto &v : vec)
        cout << v << " " ;
    cout << endl;
    OrderSearch(vec,128);
    cout << endl;
    OrderSearch(vec,2048);
    cout << endl;
    BinarySearch(vec,64);
    cout << endl;
    BinarySearch(vec,2048);
    cout << endl;
    return 0;
}
