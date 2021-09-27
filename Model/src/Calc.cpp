#include "Calc.hpp"
#include "Logger.hpp"
#include "OperationKeeper.hpp"
#include "Operation.hpp"

Model::Calc::Calc():
    logger(new Logger()),
    operationKeeper(new OperationKeeper())
{
}

Model::Calc::~Calc()
{
    delete logger;
    delete operationKeeper;
}

std::list<std::string> Model::Calc::getHistori() {
    return logger->getCurrent();
}


Model::Calc & Model::Calc::GetInstance() {
    static Calc instance;
    return instance;
}

Model::Ñalculator  &Model::Calc::GetÑalculator() {
    return GetInstance();
}

Model::Stenographer  &Model::Calc::GetStenographer() {
    return GetInstance();
}

double Model::Calc::operation(double A, double B, std::string operation) const {
    return current.at(operation)->operator()(A,B);
}

void Model::Calc::takeRecord(std::string name, double a, double b, double res) {
    logger->addRecord(name, a, b, res);
}

std::list<std::string> Model::Calc::getOperations() {
    std::list<std::string> result;
    current.clear();
    for (auto &op : operationKeeper->getOperations()) {
        current.insert(std::pair(op->getName(), op));
        result.push_back(op->getName());
    }
    return result;
}