#ifndef OPERATION_KEEPER_HPP
#define OPERATION_KEEPER_HPP

#include <list>

#include "Operation.hpp"

namespace Model {
	class OperationKeeper {
	public:
		OperationKeeper();
		using Operations = std::list<Operation *>;
		const Operations &getOperations()const;
		~OperationKeeper();
	private:
		Operations operations;
	};
	
}
#endif // !OPERATION_KEEPER_HPP