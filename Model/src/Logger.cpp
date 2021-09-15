#include "Logger.hpp"

Model::Logger::Logger():logFilename("log.txt") {}

void Model::Logger::addAction(std::string action) {
	actions.push(action);
}

std::list<std::string> Model::Logger::getCurrent() {
	return std::list<std::string>({ actions._Get_container().begin(), actions._Get_container().end()});
}

Model::Logger::~Logger() {
	std::ofstream outf(logFilename);
	if (outf.is_open()) {
		while (!actions.empty()) {
			outf<< actions.front() << '\n';
			actions.pop();
		}
	}
	outf.close();
}
