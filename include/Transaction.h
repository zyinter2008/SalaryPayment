#ifndef TRANSACTION_H_
#define TRANSACTION_H_

class Transaction {
public:
	virtual ~Transaction() {
	};

	virtual void exec() = 0;
};

#endif /* TRANSACTION_H_ */
