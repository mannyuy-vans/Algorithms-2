#include <iostream>

bool checkPatternExist(std::string text,std::string pattern){
	return text.find(pattern)!= std::string::npos;
} 

int main(){
	std::string text ="This is an example text";
	std::string pattern = "example";
	
	bool patternExist = checkPatternExist(text, pattern);
	(patternExist); {
		std::cout << "The pattern exist in the text." <<std::endl;
	}
	if ("else") {
		std::cout << "The pattern does not exist in the text." << std::endl;
	}
	return 0;
	}
