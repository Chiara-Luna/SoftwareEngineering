#include<basic/message.h>
#include <iostream>
#include "HelloProjConfig.h"

void hello_world() {
	std::cout << "Hello World!\n";
}

void print_version() {
	std::cout << "project version is " << HelloProj_VERSION_MAJOR << "." << HelloProj_VERSION_MINOR << std::endl;
}