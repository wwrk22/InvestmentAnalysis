#ifndef IA_CONSUMER_DEFENSIVE_H
#define IA_CONSUMER_DEFENSIVE_H

#include "company.h"
#include "metric/revenue.h"

#include <memory>
#include <iostream>
#include <vector>

class ConsumerDefensive : public Company {
public:
	ConsumerDefensive(const std::string& name, const std::string& ticker_symbol);
	~ConsumerDefensive() override;

	std::vector<std::shared_ptr<Metric>> initMetrics() override;
};

#endif
