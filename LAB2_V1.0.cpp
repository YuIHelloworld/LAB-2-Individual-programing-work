#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;

void Count_Keywork_Switch_Case(string inputfile,int level) {//TODO(JZ)
    std::ifstream inFile(inputfile, std::ios::in); //open file
    
    string keyword[32] = {"auto","break","case","char","const","continue","default","do",
			                "double","else","enum","extern","float","for","goto","if",
			                "int","long","register","return","short","signed","sizeof","static",
			                "struct","switch","typedef","union","unsigned","void","volatile","while"};