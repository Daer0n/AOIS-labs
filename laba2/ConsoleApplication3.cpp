
#include "header.h"
#include "header.cpp"



int main()
{
    TruthTable t;
    SKNF Sknf;
    SDNF Sdnf;
    std::string expression, sknf, sdnf;
    std::cout << "Enter formula: ";
    std::getline(std::cin, expression);
    Sknf.run_truth_table(expression);
    sknf = Sknf.create_sknf();
    Sknf.print_table();
    SKNF::print_sknf(sknf);
    Sdnf.run_truth_table(expression);
    sdnf = Sdnf.create_sdnf();
    SDNF::print_sdnf(sdnf);
    
    
}

// !((!b+c)*(!(!a*c)))