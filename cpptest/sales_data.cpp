//
//  sales_data.cpp
//  cpptest
//
//  Created by Wenjin Zhang on 2019/8/4.
//  Copyright © 2019年 Wenjin Zhang. All rights reserved.
//

#include "sales_data.hpp"

Sales_data::Sales_data() = default;
Sales_data::Sales_data(const string& s):bookNo(s){};
Sales_data::Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n){};

double Sales_data::avg_price() const{
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

