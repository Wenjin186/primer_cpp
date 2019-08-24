//
//  sales_data.hpp
//  cpptest
//
//  Created by Wenjin Zhang on 2019/8/4.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#ifndef sales_data_hpp
#define sales_data_hpp

#include <iostream>

using namespace std;

class Sales_data{
    
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);
    friend istream &read(istream&, Sales_data&);
    
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

public:
    Sales_data();
    Sales_data(const string &s);
    Sales_data(const string &s, unsigned n, double p);
    
    string isbn() const {return bookNo;}
    Sales_data& combine (const Sales_data&);
    double avg_price() const;
};

Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

#endif /* sales_data_hpp */
