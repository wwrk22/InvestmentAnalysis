#include "company.h"


Company::Company(const std::string& name, const std::string& ticker_symbol) :
	name_(name), ticker_symbol_(ticker_symbol) {}

void Company::recordMetrics() {
	std::vector<std::shared_ptr<Metric>> metrics{ initMetrics() };

	for (std::shared_ptr<Metric> metric : metrics) metric->record();
}
