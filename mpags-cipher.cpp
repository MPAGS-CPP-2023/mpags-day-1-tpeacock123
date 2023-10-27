#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs {argv, argv+argc };
    for(int i = 0; i < argc; i++){
        if(cmdLineArgs[i] == "-h" ||cmdLineArgs[i] == "--help"){
            std::cout << "uh oh" << std::endl;

        }
        if(cmdLineArgs[i] == "-i"){
            std::string input_file = cmdLineArgs[i+1];
            std::cout << "input file is "<< input_file << std::endl;
        }
        if(cmdLineArgs[i] == "-o"){
            std::string output_file = cmdLineArgs[i+1];
            std::cout << "output file is "<< output_file << std::endl;
        }
    }





    char in_char{'x'};
    std::string out_str{""};

    // Take each letter from user input and in each case:
    while(std::cin >> in_char)
    {
        if(std::isalpha(in_char)){
            std::cout << in_char << std::endl;
            out_str.push_back(std::toupper(in_char));
            continue; 
        } 

        switch (in_char)
        {
            case 1:
                out_str = "ONE";
                break;

            case 2:
                out_str  = "two";
                break;

            default:
                // Do nothing
                break;
        }
    // - Ignore any other (non-alpha) characters
    // - In each case, add result to a string variable   
    }
    // print out the new string
    std::cout << out_str << std::endl;
    
}