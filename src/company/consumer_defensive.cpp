#include "consumer_defensive.h"

ConsumerDefensive::ConsumerDefensive(const std::string& name,
																		 const std::string& ticker_symbol) :
	Company(name, ticker_symbol) {}

ConsumerDefensive::~ConsumerDefensive() {}

std::vector<std::shared_ptr<Metric>> ConsumerDefensive::initMetrics() {
	std::vector<std::shared_ptr<Metric>> h;
	h.push_back(std::make_shared<Revenue>());
	return h;
}
