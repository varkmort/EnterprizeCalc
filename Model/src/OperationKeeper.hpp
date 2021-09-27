#ifndef OPERATION_KEEPER_HPP
#define OPERATION_KEEPER_HPP

#include <list>

#include "Operation.hpp"
#include "RealOperations.hpp"
#ifdef MODEL_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif // MODEL_EXPORTS

namespace Model {
	class DECLSPEC OperationKeeper {
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