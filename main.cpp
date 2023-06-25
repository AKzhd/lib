#include "user.hpp"
#include "message.hpp"
#include <filesystem>
#include <fstream>
namespace fs = std::filesystem;


int main()
{
 // USERS INFO
  std::fstream user_file = std::fstream("users.txt", ios::in | ios::out);
	if (!user_file)  {
		// Для создания файла используем параметр ios::trunc
    user_file = fstream("users.txt", ios::in | ios::out | ios::trunc);
    fs::permissions("users.txt",
        fs::perms::group_write | fs::perms::others_all,
        fs::perm_options::remove);
  }

	if (user_file) {
    // Чтение файла
		User obj;
    while (!user_file.eof()) {
      obj>>user_file;
      obj << std::cout << std::endl;
    }

    user_file.clear(std::ios_base::goodbit);

    // Запишем данные по в файл
    User obj1("alex90", "qwerty", "alexei97", "Alexei");
		obj1<< user_file;
	}
	else
	{
		cout << "Could not open file users.txt !" << '\n';
		return 0;

	}



    return 0;
}