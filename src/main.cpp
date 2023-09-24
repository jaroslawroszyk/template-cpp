// #include <iostream>
// #include "add.hpp"
// #include <array>
// #include <iostream>
// #include <boost/multiprecision/cpp_int.hpp>

// namespace mp = boost::multiprecision;

// int main()
// {
//     // Obliczamy silnię liczby 10
//     mp::cpp_int result = 1;
//     for (int i = 1; i <= 10; ++i)
//     {
//         result *= i;
//     }

//     // Wyświetlamy wynik
//     std::cout << "Silnia z 10 wynosi: " << result << std::endl;
//     Foo f;
//     std::cout << f.add(2, 3);
//     return 0;
// }
#include <boost/graph/adjacency_list.hpp>
#include <array>
#include <utility>
#include <iostream>

int main()
{

    enum { topLeft, topRight, bottomRight, bottomLeft };

    std::array<std::pair<int, int>, 4> edges{ {
                                                     std::make_pair(topLeft, topRight),
                                                     std::make_pair(topRight, bottomRight),
                                                     std::make_pair(bottomRight, bottomLeft),
                                                     std::make_pair(bottomLeft, topLeft)
                                             } };

    typedef boost::adjacency_list<boost::setS, boost::vecS,
        boost::undirectedS> graph;
    graph g{ edges.begin(), edges.end(), 4 };

    std::cout << boost::num_vertices(g) << '\n';
    std::cout << boost::num_edges(g) << '\n';

    g.clear();
    return 0;
}