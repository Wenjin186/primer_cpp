//
//  Window_mgr.hpp
//  cpptest
//
//  Created by Wenjin Zhang on 2019/8/16.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#ifndef Window_mgr_hpp
#define Window_mgr_hpp

#include <iostream>
#include <vector>
#include "Screen.hpp"

using namespace std;

class Window_mgr {
private:
    string s="hello world";//= {}
    vector<Screen> screens{Screen(24, 80, ' ')};
    void test();
};

#endif /* Window_mgr_hpp */
