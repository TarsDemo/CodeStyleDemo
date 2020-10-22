#include "StyleImp.h"
#include "servant/Application.h"

using namespace std;

//////////////////////////////////////////////////////
void StyleImp::initialize() {
	//initialize servant here:
	//...
}

//////////////////////////////////////////////////////
void StyleImp::destroy() {
	//destroy servant here:
	//...
}

int StyleImp::hello(const string &req, string &res, tars::TarsCurrentPtr current)
{
	TLOGINFO(req);

	if ("" == req) {
		res = "Hello TARS!";
	}
	else if ("Bye" == req) {
		res = "Bye~" ;
	} else {
		res = (req +", Hello TARS!");
	}
	
	return 0;
}
