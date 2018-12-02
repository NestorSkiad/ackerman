/** Nestor Skiadas
An efficient version of Ackerman's function.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <unordered_map>
 #include <utility>
 #include <functional>

std::unordered_map<std::pair<int, int>, int> solution_dict;

struct pair_hash{
  template <class T1, class T2>

  std::size_t operator () (const std::pair<T1, T2> &p) cont {
    auto h1 = std::hash<T1> {}(p.first);
    auto h2 = std::hash<T2> {}(p.first);


  }
}

 int main(int argc, char const *argv[]) {
   solution_dict[{2, 8}] = 5
   printf("%s  %d\n", "hey", solution_dict[{2, 8}]);
   return 0;
 }
