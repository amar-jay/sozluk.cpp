# Turkish - English dictionary
This is a simple Turkish - English dictionary written in C++. It uses a JSON file to store the words and their meanings. It is not a complete dictionary, it only contains the most common words.


### Installation
In installing this the [lib/](./lib/) directory, [dictionary.cpp](dictionary.cpp) and [dictionary.hpp](./dictionary.hpp) files must be copied.

### NOTE
- I will not add new words to the dictionary. If you want to add new words, you can fork this project and add them yourself.

- The words is stored in JSON format which is not suitable for large dictionaries. If you want to use a large dictionary, you can fork this project and change the storage format. or can substitute it with [SQL DB](https://github.com/firatkaya1/dictionary/blob/main/dictionary-sql.zip)

# Türkçe - İngilizce sözlük
Bu C++ ile yazılmış basit bir Türkçe - İngilizce sözlüktür. Kelimeleri ve anlamlarını saklamak için bir JSON dosyası kullanır. Tam bir sözlük değildir, sadece en yaygın kelimeleri içerir.

### Installation
Bu projeyi kurmak için [lib/](./lib/) dizini, [dictionary.cpp](dictionary.cpp) ve [dictionary.hpp](./dictionary.hpp) dosyaları kopyalanmalıdır.

### NOT
- Sözlüğe yeni kelimeler eklemeyeceğim. Yeni kelimeler eklemek isterseniz, bu projeyi çatallayabilir ve kendiniz ekleyebilirsiniz.

- Kelimeler JSON formatında saklanır, bu da büyük sözlükler için uygun değildir. Büyük bir sözlük kullanmak istiyorsanız, bu projeyi çatallayabilir ve depolama formatını değiştirebilirsiniz. veya [SQL DB](https://github.com/firatkaya1/dictionary/blob/main/dictionary-sql.zip) ile değiştirebilirsiniz.



## Usage
```cpp
#include <iostream>
#include "dictionary.hpp"

int main() {
	Dictionary dictionary;
	std::cout << dictionary.from_english("hello")[0] << std::endl;
	std::cout << dictionary.from_turkish("merhaba")[0] << std::endl;
	return 0;
}
```




---
#### Thanks to
- [nlohmann/json](https://github.com/nlohmann/json)
- [firatkaya/dictionary](https://github.com/firatkaya1/dictionary)
