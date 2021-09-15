#include "..\..\View\Calc.hpp"
#include "Calc.hpp"
#include "Logger.hpp"
#include "OperationKeeper.hpp"
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


Model::Calc * Model::Calc::GetInstance() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr) {
        pinstance_ = new Calc();
    }
    return pinstance_;
}
