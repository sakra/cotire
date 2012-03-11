// cotire example project main

#include <string>

#include "example.h"
#include "log.h"

int main(int argc, char** argv)
{
	std::string msg = example::get_message();
	log::info(msg);
}
