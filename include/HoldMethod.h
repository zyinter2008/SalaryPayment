#ifndef HOLDMETHOD_H_
#define HOLDMETHOD_H_

#include <PayMethod.h>

class HoldMethod: public PayMehod {
public:
	HoldMethod();
	virtual ~HoldMethod();

	void pay();
};

#endif /* HOLDMETHOD_H_ */
