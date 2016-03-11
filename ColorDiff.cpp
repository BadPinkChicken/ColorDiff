#include <cmath>
#include <stdlib.h>
#include <string>
#include <iostream>

typedef	struct	s_color{

  double	red;
  double	green;
  double	blue;
}		t_color;

double		Distance(double a, double b)
{
        return ((a - b) * (a - b));
}

double		colorDiff(t_color c_1, t_color c_2) {
  double		Diff;

  Diff = Distance(c_1.red, c_2.red) + Distance(c_1.green, c_2.green) + Distance(c_1.blue, c_2.blue);
  return sqrt(Diff) / 440 * 100;
}

int main(int ac, char **av)
{
  if (ac != 7){
      std::cout << "Usage ./ColorDiff R1 G2 B3 R2 G2 B2" << std::endl;
    }
  else
    {
    t_color	c_1 = {atoi(av[1]) % 256, atoi(av[2]) % 256, atoi(av[3]) % 256};
    t_color	c_2 = {atoi(av[4]) % 256, atoi(av[5]) % 256, atoi(av[6]) % 256};
      std::cout << "Diff between {" << atoi(av[1]) % 256 << "," << atoi(av[2]) % 256 << "," << atoi(av[3]) % 256 << "} and {" << atoi(av[4]) % 256 << "," << atoi(av[5]) % 256 << "," << atoi(av[6]) % 256 << "}" << std::endl;
      std::cout << colorDiff(c_1 , c_2) << std::endl;
    }
  return (0);
}
