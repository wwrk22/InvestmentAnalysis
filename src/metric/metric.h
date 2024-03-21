#ifndef IA_METRIC_H
#define IA_METRIC_H

#include <iostream>

class Metric {
public:
	virtual ~Metric() {};

	virtual void record() = 0;
};

#endif
