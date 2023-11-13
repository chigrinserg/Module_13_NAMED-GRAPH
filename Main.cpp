#include "Graph.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
    setlocale(LC_ALL, "Rus");
    Graph g;

    g.addVertex(0, "Петр");
    g.addVertex(1, "Иван");
    g.addVertex(2, "Ольга");
    g.addVertex(3, "Николай");
    g.addVertex(4, "Светлана");
    g.addVertex(5, "Виктор");
    g.addVertex(6, "Галина");
    g.addVertex(7, "Борис");
    g.addVertex(8, "Катя");
    g.addVertex(9, "Володя");
    g.addVertex(10, "Ирина");
    g.addVertex(11, "Сергей");
    g.addVertex(12, "Василий");
    g.addVertex(13, "Нина");
    g.addVertex(14, "Саша");

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 6, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(3, 7, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(4, 8, 1);
    g.addEdge(5, 9, 1);
    g.addEdge(6, 11, 1);
    g.addEdge(6, 14, 1);
    g.addEdge(9, 13, 1);
    g.addEdge(11, 10, 1);
    g.addEdge(11, 12, 1);
    g.addEdge(12, 13, 1);

    std::cout << '\n';
    std::cout << "Расстояние, равное 3, имеется между именами: " << '\n';
    std::cout << '\n';
    g.findStrangers();
    std::cout << '\n';
    g.Count();
    std::cout << '\n';
    return 0;
}
