#include <string>
#include <vector>

struct Word {
	std::string turkish;
	std::string english;
};



class Dictionary {

public:
	Dictionary() {
		parse_json("assets/dictionary.json");
	}
	~Dictionary() {
		this->words.clear();
	}
	// search if word is in dictionary exists
	bool search(const std::string& word) const;

	// remove word from dictionary
	void remove(const std::string& word);

	// give word translate from turkish to english
	std::vector<std::string> from_turkish(const std::string& word) const;

	// give word translate from english to turkish
	std::vector<std::string> from_english(const std::string& word) const;

	private:
		// all words in dictionary
		std::vector<Word> words;

		// parse json file and insert words to dictionary
		void parse_json(const std::string& json_file);

		// insert word to dictionary
		void insert(const std::string& turkish, const std::string& english);
};
