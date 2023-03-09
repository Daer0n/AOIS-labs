
#include <iostream>
#include <string>

#define SIZE 8

struct Stack {
    Stack* next;
    char info;
};

struct Set {
    bool a;
    bool b;
    bool c;
    bool result;
};

class TruthTable
{
public:
    TruthTable();
    Set table[8];
    void run_truth_table(std::string expression);
    void print_table();

private:
    void push_char(Stack*& top, char info);
    void push_bool(Stack*& top, bool info);
    void pop_char(Stack*& top, char* info);
    void pop_bool(Stack*& top, bool* info);
    int prior(char oper);
    std::string translate_to_opz(std::string expression);
    bool truth_table(std::string expression, bool a, bool b, bool c);
};


class SKNF : public TruthTable
{
public:
    std::string create_sknf();
    static void print_sknf(std::string sknf);

};

class SDNF : public TruthTable
{
public:
    std::string create_sdnf();
    static void print_sdnf(std::string sdnf);

};