#ifndef IA_COMPANY_H
#define IA_COMPANY_H

#include "metric/metric.h"

#include <string>
#include <vector>
#include <memory>


class Company {

public:
	Company(const std::string& name, const std::string& ticker_symbol);
	virtual ~Company() {};

	virtual std::vector<std::shared_ptr<Metric>> initMetrics() = 0;
	void recordMetrics();

protected:
	std::string name_;
	std::string ticker_symbol_;
};

#endif
