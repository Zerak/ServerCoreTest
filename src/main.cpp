//-*- C++ main -*-
/**
 * Created time : 2013年11月22日, 下午3:09
 * File         : main.cpp
 * Author       : GNUnix <Kingbug2010@gmail.com>
 * Description  :
 *
 * <Change_list>
 */

#include <stdio.h>
using namespace std;

#include "ServerCore.hpp"
#include "ClientFactory.hpp"

/*
 *
 */
int main(int argc, char** argv)
{
    ClientFactory factory;

    int n = factory.getClientCount();
    printf("[main] client count[%d]\n",n);
    return 0;
}
