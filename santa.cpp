#include <string>
#include <iostream>
#include <fstream>
#include "Object.hpp"

bool checkList(std::string &list)
{
  std::string obj_cur;
  std::string obj_val;


}

int main(int ac, char **av)
{
  std::string filename;
  std::ifstream f;
  std::string line;
  std::string content;

  for (int i=1; i < ac; i++)
    {
      f.open(argv[i]);
      if (!f.good())
        std::cerr << "File " << av[i] << " is unreadable" << std::endl;
      else
        {
          content = "";
          while (!f.eof())
            {
              getline(f, line, (char)EOF);
              content << line;
            }
          f.close();
          if (!checkList(content))
            std::cout << "The list '" << av[i] << "' has been broken." << std::endl;
        }
    }
  return 0;
}
