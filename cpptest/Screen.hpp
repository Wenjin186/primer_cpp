//
//  Screen.hpp
//  cpptest
//
//  Created by Wenjin Zhang on 2019/8/16.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <iostream>
#include <string>

class Window_mgr;

using namespace std;

class Screen{
    
    friend class Window_mgr;
    
public:
    typedef string::size_type pos;
    
    Screen() = default; //因为Screen有另一个构造函数，所以本函数是必需的
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}
    char get() const {return contents[cursor];}
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    
    void some_member() const;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
    
    mutable size_t access_ctr;
};

#endif /* Screen_hpp */
