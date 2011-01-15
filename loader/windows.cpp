// Cadence Loader.cpp : Defines the entry point for the console application.
//

#ifdef _MSC_VER
#include <tchar.h>
#endif
#include "cadence/cadence.h"
#include "cadence/file.h"
#include "cadence/memory.h"

#ifdef _MSC_VER
int _tmain(int argc, _TCHAR* argv[])
#else
int main(int argc, char *argv[])
#endif
{
	cadence::initialise(argc, argv);

	cadence::doste::root["notations"]["dasm"]["run"] = NEW cadence::LocalFile("win32.dasm");
	cadence::doste::root["notations"]["dasm"]["run"] = NEW cadence::LocalFile("config.dasm");
	
	cadence::run();
	cadence::finalise();
}