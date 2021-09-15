#include "Calc.hpp"

Model::Calc * Model::Calc::GetInstance() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (pinstance_ == nullptr) {
        pinstance_ = new Calc();
    }
    return pinstance_;
}
