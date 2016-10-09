#ifndef PAYMETHOD_H_
#define PAYMETHOD_H_

class PayMehod {
public:
	virtual ~PayMehod(){};
	virtual void pay() = 0;
};

#endif /* PAYMETHOD_H_ */
