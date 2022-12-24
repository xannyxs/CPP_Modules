//
// Created by Xander Voorvaart on 8/30/22.
//

#ifndef CPP06_DATA_H
#define CPP06_DATA_H

#include <iostream>

class Data
{
public:
    Data(void);
    Data(const Data& ref);
    ~Data(void);

    Data& operator=(const Data& ref);

    // Functions
    void HelloWorld(void);
    void SpookyPrint(void);
private:
    const int32_t   _SpookyData;
};


#endif //CPP06_DATA_H
