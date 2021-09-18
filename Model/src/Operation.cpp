#include "Operation.hpp"

namespace Model {
	Operation::Operation(std::string name) :name(name) {}

	std::string Operation::getName() const {
		return name;
	}

}