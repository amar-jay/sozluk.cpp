#include <iostream>
#include <string>
#include "dictionary.hpp"

int main() {
	// TODO: Test your code here
	Dictionary dictionary;
	std::string eng_word = "hello";
	std::string tur_word = "merhaba";
	std::cout << "English - Turkish: " << std::endl;
	if (dictionary.search(eng_word)) {
		std::cout << "[ ";
		for (auto& i : dictionary.from_english(eng_word))
			std::cout << i << "\t" << std::endl;
		std::cout << " ]";
	}
	else
		std::cout << "Not Found" << std::endl;

	std::cout << "Turkish - English: " << std::endl;
	if (dictionary.search(eng_word)) {
		std::cout << "[ ";
		for (auto& i : dictionary.from_english(eng_word))
			std::cout << i << "\t" << std::endl;
		std::cout << " ]";
	}
	else
		std::cout << "Not Found" << std::endl;
}
