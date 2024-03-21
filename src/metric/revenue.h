#ifndef IA_REVENUE_H
#define IA_REVENUE_H

#include "metric.h"

#include <iostream>

class Revenue : public Metric {
public:
	~Revenue() override;

	void record() override;
};

#endif
