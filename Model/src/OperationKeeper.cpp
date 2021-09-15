#include "OperationKeeper.hpp"
namespace Model {
	OperationKeeper::OperationKeeper() {
		operations.push_back(new Summ);
		operations.push_back(new Substruct);	
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