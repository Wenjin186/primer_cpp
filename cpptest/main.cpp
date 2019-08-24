//
//  main.cpp
//  cpptest
//
//  Created by Wenjin Zhang on 2019/8/4.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#include <iostream>
#include <assert.h>
#include "sales_data.hpp"

using namespace std;

auto function()->int (*)[10]; //尾置函数声明

int (*function())[10]{
    int (*temp)[10];
    return temp;
}

void function2(int=100, char='a');

void function2(int a, char b){
    cout<<a<<endl;
    cout<<b<<endl;
}

int bigger(int, int);
int bigger(int a, int b){
    if(a>b)return 1;
    else return 0;
}
//返回函数指针
auto ret_function()->void (*)();
void (*ret_function())(){
    
    return NULL;
}

//更简便的方式声明，用declaretype

void nothing();
void nothing(){
    
}

decltype(nothing) *ret_function2();
void (*ret_function2())(){
    return nothing;
    
}


struct MyStruct{
    void print();
};

void MyStruct::print(){
    cout<<"hello world!"<<endl;
}

int main(int argc, const char * argv[]) {
    //assert(bigger(4, 5));
    
    //创造一个指向函数bigger的指针
    //int (*fp)(int, int) = bigger;
    //int ret = fp(4, 5);
    //cout<<ret<<endl;
    
    //MyStruct mystruct;
    //mystruct.print();
    
    //const Sales_data data;
    //data.isbn();
    //这种调用的时候，会把data的这个类型隐式的传给this指针，this指针是一个Sales_data *const this，并不是const
    //类似于，data.isbn(&data) 因为data是const类型，所以Sales_data *const this = data会出问题
    //所以就无法调用isbn这个函数。
    
    Sales_data data;
    //read(cin, data);
    //print(cout, data);
    
    return 0;
}
