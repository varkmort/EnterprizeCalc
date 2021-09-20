#include "OperationKeeper.hpp"
namespace Model {
	OperationKeeper::OperationKeeper() {
		operations.push_back(new Addition);
		operations.push_back(new Subtraction);	
		operations.push_back(new Multiply);
	}

	const std::list<Operation *> &OperationKeeper::getOperations() const {
		return operations;
	}

	OperationKeeper::~OperationKeeper() {
		for (auto e : operations) {
			delete e;
		}
	}
}