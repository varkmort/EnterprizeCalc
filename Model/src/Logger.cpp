#include "Logger.hpp"

Model::Logger::Logger():logFilename("log.txt") {}

void Model::Logger::addRecord(std::string name, double a, double b, double res) {
	std::string record;
	record += std::to_string(a);
	record += name;
	record += std::to_string(b);
	record += '=';
	record += std::to_string(res);
	std::lock_guard guard{ mut };
	actions.push(record);
}

std::list<std::string> Model::Logger::getCurrent() {
	std::lock_guard guard{ mut };
	return std::list<std::string>({ actions._Get_container().begin(), actions._Get_container().end()});
}

Model::Logger::~Logger() {
	std::ofstream outf(logFilename, std::ios::out | std::ios::app);
	if (outf.is_open()) {
		while (!actions.empty()) {
			outf<< actions.front() << '\n';
			actions.pop();
		}
	}
	outf.close();
}
