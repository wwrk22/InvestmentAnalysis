#ifndef IA_COMPANY_H
#define IA_COMPANY_H

#include <string>


class Company {

public:
	Company(const std::string& name, const std::string& ticker_symbol);
	~Company();

protected:
	std::string name_;
	std::string ticker_symbol_;
};

#endif
