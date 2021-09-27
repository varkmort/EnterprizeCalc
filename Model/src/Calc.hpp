#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
#include <string>
#include <map>
#include <list>




#ifdef MODEL_EXPORTS
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif // MODEL_EXPORTS


namespace Model {
    class DECLSPEC Stenographer {
    public:
        virtual void takeRecord(std::string name, double a, double b, double res) = 0;
    };
    class DECLSPEC Сalculator {
    public:
        virtual std::list<std::string> getOperations() = 0;
        virtual std::list<std::string> getHistori() = 0;
        virtual double operation(double A, double B, std::string operation)const =0;
    };

    class OperationKeeper;
    class Logger;
    class Operation;

    class DECLSPEC Calc:public Stenographer,public Сalculator {
    private:
        Logger *logger;
        OperationKeeper *operationKeeper;
        std::map<std::string, Model::Operation *> current;
    protected:
        Calc();
        ~Calc();
        static Calc &GetInstance();
    public:
        Calc(Calc &other) = delete;
        void operator=(const Calc &) = delete;
        static Сalculator  &GetСalculator();
        static Stenographer  &GetStenographer();
       

        std::list<std::string> getOperations();
        std::list<std::string> getHistori();

        double operation(double A, double B, std::string operation)const;

        void takeRecord(std::string name, double a, double b, double res);
    };
}