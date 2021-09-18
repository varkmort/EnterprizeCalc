#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
#include <string>
#include <thread>
#include <mutex>
#include <map>
#include "Operation.hpp"

namespace Model {
    class OperationKeeper;
    class Logger;
    class Calc {
    private:
        static Calc *pinstance_;
        static std::mutex mutex_;
        Logger *logger;
        OperationKeeper *operationKeeper;
    protected:
        Calc();
        ~Calc();

    public:
        Calc(Calc &other) = delete;
        void operator=(const Calc &) = delete;

        static Calc *GetInstance();

        std::map<std::string, Model::Operation *> getOperations()const;
    

    };
}