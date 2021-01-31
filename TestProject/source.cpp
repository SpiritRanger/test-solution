#include <iostream>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;

#ifdef _DEBUG
#include "logger.h"
    Logger log;
#endif



int main(){

    int a, b;

#ifdef _DEBUG
    log.For("sourec.cpp", "test-comment");
#endif
}

