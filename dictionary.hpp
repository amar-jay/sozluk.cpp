#include <string>
#include <fstream>
#include "lib/json.hpp"
#include "dictionary.cpp"

// using Word = Dictionary::Word;
using json = nlohmann::json;
using namespace std;
void Dictionary::parse_json(const std::string& json_file) {	
	ifstream f(json_file);
	json j = json::parse(f);
	for (auto& i : j) {
		this->insert(i["tr"], i["word"]);
	}
}

void Dictionary::insert(const std::string& turkish, const std::string& english) {
	// delete duplicate words
	for (auto& i : this->words) {
		if (i.turkish == turkish || i.english == english) {
			return;
		}
	}
	Word word;
	word.turkish = turkish;
	word.english = english;
	this->words.push_back(word);
}

bool Dictionary::search(const std::string& word) const {
	if (word == "") {
		return false;
	}
	for (auto& i : this->words) {
		if (i.turkish == word || i.english == word) {
			return true;
		}
	}

	return false;
}

void Dictionary::remove(const std::string& word) {
	for (auto& i : this->words) {
		if (i.turkish == word || i.english == word) {
			// this->words.erase(i);
			//TODO: remove word from dictionary
		}
	}
}

std::vector<std::string> Dictionary::from_turkish(const std::string& word) const {
	std::vector<std::string> result;
	for (auto& i : this->words) {
		if (i.turkish == word) {
			result.push_back(i.english);
		}
	}
	return result;
}

std::vector<std::string> Dictionary::from_english(const std::string& word) const {
	std::vector<std::string> result;
	for (auto& i : this->words) {
		if (i.english == word) {
			result.push_back(i.turkish);
		}
	}
	return result;
}
