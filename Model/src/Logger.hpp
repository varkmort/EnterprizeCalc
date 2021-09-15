#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <queue>
#include <fstream>
#include <list>

namespace Model {
	class Logger {
	public:
		Logger();
		void addAction(std::string action);
		using History = std::list<std::string>;
		History getCurrent();
		//History getAll();
		~Logger();
	private:
		std::queue<std::string> actions;
		std::string logFilename;
	};
}
#endif // !LOGGER_HPP