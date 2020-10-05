#include "CodeStyleDemo.h"
#include "StyleImp.h"

using namespace std;

CodeStyleDemo g_app;

/////////////////////////////////////////////////////////////////
void CodeStyleDemo::initialize() {
	//initialize application here:
	//...

	addServant<StyleImp>(ServerConfig::Application + "." + ServerConfig::ServerName + ".StyleObj");
}
/////////////////////////////////////////////////////////////////
void CodeStyleDemo::destroyApp() {
	//destroy application here:
	//...
}
/////////////////////////////////////////////////////////////////
int main(int argc, char *argv[]) {
	try
	{
		g_app.main(argc, argv);
		g_app.waitForShutdown();
	}
	catch (std::exception &e)
	{
		cerr << "std::exception:" << e.what() << std::endl;
	}
	catch (...)
	{
		cerr << "unknown exception." << std::endl;
	}
	return -1;
}
/////////////////////////////////////////////////////////////////
