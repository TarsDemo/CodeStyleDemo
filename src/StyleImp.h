#ifndef _StyleImp_H_
#define _StyleImp_H_

#include "servant/Application.h"
#include "Style.h"

/**
 *
 *
 */
class StyleImp : public Demo::Style
{
public:
	/**
   *
   */
	virtual ~StyleImp() {}

	/**
   *
   */
	virtual void initialize();

	/**
   *
   */
	virtual void destroy();

	/**
   *
   */
	virtual int test(tars::TarsCurrentPtr current) { return 0; };

	/**
   * @brief hello接口
   */
	virtual int hello(const std::string &req, std::string &res, tars::TarsCurrentPtr current);
};
/////////////////////////////////////////////////////
#endif
